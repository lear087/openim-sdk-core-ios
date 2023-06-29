// Objective-C API for talking to open_im_sdk/open_im_sdk_callback Go package.
//   gobind -lang=objc open_im_sdk/open_im_sdk_callback
//
// File is generated by gobind. Do not edit.

#ifndef __Open_im_sdk_callback_H__
#define __Open_im_sdk_callback_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@protocol Open_im_sdk_callbackBase;
@class Open_im_sdk_callbackBase;
@protocol Open_im_sdk_callbackOnAdvancedMsgListener;
@class Open_im_sdk_callbackOnAdvancedMsgListener;
@protocol Open_im_sdk_callbackOnBatchMsgListener;
@class Open_im_sdk_callbackOnBatchMsgListener;
@protocol Open_im_sdk_callbackOnConnListener;
@class Open_im_sdk_callbackOnConnListener;
@protocol Open_im_sdk_callbackOnConversationListener;
@class Open_im_sdk_callbackOnConversationListener;
@protocol Open_im_sdk_callbackOnCustomBusinessListener;
@class Open_im_sdk_callbackOnCustomBusinessListener;
@protocol Open_im_sdk_callbackOnFriendshipListener;
@class Open_im_sdk_callbackOnFriendshipListener;
@protocol Open_im_sdk_callbackOnFriendshipListenerSdk;
@class Open_im_sdk_callbackOnFriendshipListenerSdk;
@protocol Open_im_sdk_callbackOnGroupListener;
@class Open_im_sdk_callbackOnGroupListener;
@protocol Open_im_sdk_callbackOnListenerForService;
@class Open_im_sdk_callbackOnListenerForService;
@protocol Open_im_sdk_callbackOnMessageKvInfoListener;
@class Open_im_sdk_callbackOnMessageKvInfoListener;
@protocol Open_im_sdk_callbackOnSignalingListener;
@class Open_im_sdk_callbackOnSignalingListener;
@protocol Open_im_sdk_callbackOnUserListener;
@class Open_im_sdk_callbackOnUserListener;
@protocol Open_im_sdk_callbackPutFileCallback;
@class Open_im_sdk_callbackPutFileCallback;
@protocol Open_im_sdk_callbackSendMsgCallBack;
@class Open_im_sdk_callbackSendMsgCallBack;

@protocol Open_im_sdk_callbackBase <NSObject>
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onSuccess:(NSString* _Nullable)data;
@end

@protocol Open_im_sdk_callbackOnAdvancedMsgListener <NSObject>
- (void)onMsgDeleted:(NSString* _Nullable)message;
- (void)onNewRecvMessageRevoked:(NSString* _Nullable)messageRevoked;
- (void)onRecvC2CReadReceipt:(NSString* _Nullable)msgReceiptList;
- (void)onRecvGroupReadReceipt:(NSString* _Nullable)groupMsgReceiptList;
- (void)onRecvMessageExtensionsAdded:(NSString* _Nullable)msgID reactionExtensionList:(NSString* _Nullable)reactionExtensionList;
- (void)onRecvMessageExtensionsChanged:(NSString* _Nullable)msgID reactionExtensionList:(NSString* _Nullable)reactionExtensionList;
- (void)onRecvMessageExtensionsDeleted:(NSString* _Nullable)msgID reactionExtensionKeyList:(NSString* _Nullable)reactionExtensionKeyList;
- (void)onRecvNewMessage:(NSString* _Nullable)message;
- (void)onRecvOfflineNewMessages:(NSString* _Nullable)messageList;
@end

@protocol Open_im_sdk_callbackOnBatchMsgListener <NSObject>
- (void)onRecvNewMessages:(NSString* _Nullable)messageList;
- (void)onRecvOfflineNewMessages:(NSString* _Nullable)messageList;
@end

@protocol Open_im_sdk_callbackOnConnListener <NSObject>
- (void)onConnectFailed:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onConnectSuccess;
- (void)onConnecting;
- (void)onKickedOffline;
- (void)onUserTokenExpired;
@end

@protocol Open_im_sdk_callbackOnConversationListener <NSObject>
- (void)onConversationChanged:(NSString* _Nullable)conversationList;
- (void)onNewConversation:(NSString* _Nullable)conversationList;
- (void)onSyncServerFailed;
- (void)onSyncServerFinish;
- (void)onSyncServerStart;
- (void)onTotalUnreadMessageCountChanged:(int32_t)totalUnreadCount;
@end

@protocol Open_im_sdk_callbackOnCustomBusinessListener <NSObject>
- (void)onRecvCustomBusinessMessage:(NSString* _Nullable)businessMessage;
@end

@protocol Open_im_sdk_callbackOnFriendshipListener <NSObject>
- (void)onBlackAdded:(NSString* _Nullable)blackInfo;
- (void)onBlackDeleted:(NSString* _Nullable)blackInfo;
- (void)onFriendAdded:(NSString* _Nullable)friendInfo;
- (void)onFriendApplicationAccepted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationDeleted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationRejected:(NSString* _Nullable)friendApplication;
- (void)onFriendDeleted:(NSString* _Nullable)friendInfo;
- (void)onFriendInfoChanged:(NSString* _Nullable)friendInfo;
@end

@protocol Open_im_sdk_callbackOnFriendshipListenerSdk <NSObject>
// skipped method OnFriendshipListenerSdk.OnBlackAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnBlackDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAccepted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationRejected with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendInfoChanged with unsupported parameter or return types

@end

@protocol Open_im_sdk_callbackOnGroupListener <NSObject>
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationDeleted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationRejected:(NSString* _Nullable)groupApplication;
- (void)onGroupDismissed:(NSString* _Nullable)groupInfo;
- (void)onGroupInfoChanged:(NSString* _Nullable)groupInfo;
- (void)onGroupMemberAdded:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberDeleted:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberInfoChanged:(NSString* _Nullable)groupMemberInfo;
- (void)onJoinedGroupAdded:(NSString* _Nullable)groupInfo;
- (void)onJoinedGroupDeleted:(NSString* _Nullable)groupInfo;
@end

@protocol Open_im_sdk_callbackOnListenerForService <NSObject>
- (void)onFriendApplicationAccepted:(NSString* _Nullable)groupApplication;
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
- (void)onRecvNewMessage:(NSString* _Nullable)message;
@end

@protocol Open_im_sdk_callbackOnMessageKvInfoListener <NSObject>
- (void)onMessageKvInfoChanged:(NSString* _Nullable)messageChangedList;
@end

@protocol Open_im_sdk_callbackOnSignalingListener <NSObject>
- (void)onHangUp:(NSString* _Nullable)hangUpCallback;
- (void)onInvitationCancelled:(NSString* _Nullable)invitationCancelledCallback;
- (void)onInvitationTimeout:(NSString* _Nullable)invitationTimeoutCallback;
- (void)onInviteeAccepted:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeAcceptedByOtherDevice:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeRejected:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onInviteeRejectedByOtherDevice:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onReceiveNewInvitation:(NSString* _Nullable)receiveNewInvitationCallback;
- (void)onRoomParticipantConnected:(NSString* _Nullable)onRoomParticipantConnectedCallback;
- (void)onRoomParticipantDisconnected:(NSString* _Nullable)onRoomParticipantDisconnectedCallback;
@end

@protocol Open_im_sdk_callbackOnUserListener <NSObject>
- (void)onSelfInfoUpdated:(NSString* _Nullable)userInfo;
@end

@protocol Open_im_sdk_callbackPutFileCallback <NSObject>
- (void)hashComplete:(NSString* _Nullable)hash total:(int64_t)total;
- (void)hashProgress:(int64_t)current total:(int64_t)total;
- (void)open:(int64_t)size;
- (void)putComplete:(int64_t)total putType:(long)putType;
- (void)putProgress:(int64_t)save current:(int64_t)current total:(int64_t)total;
- (void)putStart:(int64_t)current total:(int64_t)total;
@end

@protocol Open_im_sdk_callbackSendMsgCallBack <NSObject>
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onProgress:(long)progress;
- (void)onSuccess:(NSString* _Nullable)data;
@end

FOUNDATION_EXPORT id<Open_im_sdk_callbackOnFriendshipListenerSdk> _Nullable Open_im_sdk_callbackNewOnFriendshipListenerSdk(id<Open_im_sdk_callbackOnFriendshipListener> _Nullable listener);

@class Open_im_sdk_callbackBase;

@class Open_im_sdk_callbackOnAdvancedMsgListener;

@class Open_im_sdk_callbackOnBatchMsgListener;

@class Open_im_sdk_callbackOnConnListener;

@class Open_im_sdk_callbackOnConversationListener;

@class Open_im_sdk_callbackOnCustomBusinessListener;

@class Open_im_sdk_callbackOnFriendshipListener;

@class Open_im_sdk_callbackOnFriendshipListenerSdk;

@class Open_im_sdk_callbackOnGroupListener;

@class Open_im_sdk_callbackOnListenerForService;

@class Open_im_sdk_callbackOnMessageKvInfoListener;

@class Open_im_sdk_callbackOnSignalingListener;

@class Open_im_sdk_callbackOnUserListener;

@class Open_im_sdk_callbackPutFileCallback;

@class Open_im_sdk_callbackSendMsgCallBack;

@interface Open_im_sdk_callbackBase : NSObject <goSeqRefInterface, Open_im_sdk_callbackBase> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onSuccess:(NSString* _Nullable)data;
@end

@interface Open_im_sdk_callbackOnAdvancedMsgListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnAdvancedMsgListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onMsgDeleted:(NSString* _Nullable)message;
- (void)onNewRecvMessageRevoked:(NSString* _Nullable)messageRevoked;
- (void)onRecvC2CReadReceipt:(NSString* _Nullable)msgReceiptList;
- (void)onRecvGroupReadReceipt:(NSString* _Nullable)groupMsgReceiptList;
- (void)onRecvMessageExtensionsAdded:(NSString* _Nullable)msgID reactionExtensionList:(NSString* _Nullable)reactionExtensionList;
- (void)onRecvMessageExtensionsChanged:(NSString* _Nullable)msgID reactionExtensionList:(NSString* _Nullable)reactionExtensionList;
- (void)onRecvMessageExtensionsDeleted:(NSString* _Nullable)msgID reactionExtensionKeyList:(NSString* _Nullable)reactionExtensionKeyList;
- (void)onRecvNewMessage:(NSString* _Nullable)message;
- (void)onRecvOfflineNewMessages:(NSString* _Nullable)messageList;
@end

@interface Open_im_sdk_callbackOnBatchMsgListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnBatchMsgListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onRecvNewMessages:(NSString* _Nullable)messageList;
- (void)onRecvOfflineNewMessages:(NSString* _Nullable)messageList;
@end

@interface Open_im_sdk_callbackOnConnListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnConnListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onConnectFailed:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onConnectSuccess;
- (void)onConnecting;
- (void)onKickedOffline;
- (void)onUserTokenExpired;
@end

@interface Open_im_sdk_callbackOnConversationListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnConversationListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onConversationChanged:(NSString* _Nullable)conversationList;
- (void)onNewConversation:(NSString* _Nullable)conversationList;
/**
 * OnSyncServerProgress(progress int)
 */
- (void)onSyncServerFailed;
- (void)onSyncServerFinish;
- (void)onSyncServerStart;
- (void)onTotalUnreadMessageCountChanged:(int32_t)totalUnreadCount;
@end

@interface Open_im_sdk_callbackOnCustomBusinessListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnCustomBusinessListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onRecvCustomBusinessMessage:(NSString* _Nullable)businessMessage;
@end

@interface Open_im_sdk_callbackOnFriendshipListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnFriendshipListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onBlackAdded:(NSString* _Nullable)blackInfo;
- (void)onBlackDeleted:(NSString* _Nullable)blackInfo;
- (void)onFriendAdded:(NSString* _Nullable)friendInfo;
- (void)onFriendApplicationAccepted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationDeleted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationRejected:(NSString* _Nullable)friendApplication;
- (void)onFriendDeleted:(NSString* _Nullable)friendInfo;
- (void)onFriendInfoChanged:(NSString* _Nullable)friendInfo;
@end

@interface Open_im_sdk_callbackOnFriendshipListenerSdk : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnFriendshipListenerSdk> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped method OnFriendshipListenerSdk.OnBlackAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnBlackDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAccepted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationRejected with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendInfoChanged with unsupported parameter or return types

@end

@interface Open_im_sdk_callbackOnGroupListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnGroupListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationDeleted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationRejected:(NSString* _Nullable)groupApplication;
- (void)onGroupDismissed:(NSString* _Nullable)groupInfo;
- (void)onGroupInfoChanged:(NSString* _Nullable)groupInfo;
- (void)onGroupMemberAdded:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberDeleted:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberInfoChanged:(NSString* _Nullable)groupMemberInfo;
- (void)onJoinedGroupAdded:(NSString* _Nullable)groupInfo;
- (void)onJoinedGroupDeleted:(NSString* _Nullable)groupInfo;
@end

@interface Open_im_sdk_callbackOnListenerForService : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnListenerForService> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * 好友申请被同意
 */
- (void)onFriendApplicationAccepted:(NSString* _Nullable)groupApplication;
/**
 * 有人申请添加你为好友
 */
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
/**
 * 进群申请被同意
 */
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
/**
 * 有人申请进群
 */
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
/**
 * 收到新消息
 */
- (void)onRecvNewMessage:(NSString* _Nullable)message;
@end

@interface Open_im_sdk_callbackOnMessageKvInfoListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnMessageKvInfoListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onMessageKvInfoChanged:(NSString* _Nullable)messageChangedList;
@end

@interface Open_im_sdk_callbackOnSignalingListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnSignalingListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onHangUp:(NSString* _Nullable)hangUpCallback;
- (void)onInvitationCancelled:(NSString* _Nullable)invitationCancelledCallback;
- (void)onInvitationTimeout:(NSString* _Nullable)invitationTimeoutCallback;
- (void)onInviteeAccepted:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeAcceptedByOtherDevice:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeRejected:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onInviteeRejectedByOtherDevice:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onReceiveNewInvitation:(NSString* _Nullable)receiveNewInvitationCallback;
- (void)onRoomParticipantConnected:(NSString* _Nullable)onRoomParticipantConnectedCallback;
- (void)onRoomParticipantDisconnected:(NSString* _Nullable)onRoomParticipantDisconnectedCallback;
@end

@interface Open_im_sdk_callbackOnUserListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnUserListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onSelfInfoUpdated:(NSString* _Nullable)userInfo;
@end

@interface Open_im_sdk_callbackPutFileCallback : NSObject <goSeqRefInterface, Open_im_sdk_callbackPutFileCallback> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)hashComplete:(NSString* _Nullable)hash total:(int64_t)total;
- (void)hashProgress:(int64_t)current total:(int64_t)total;
- (void)open:(int64_t)size;
- (void)putComplete:(int64_t)total putType:(long)putType;
- (void)putProgress:(int64_t)save current:(int64_t)current total:(int64_t)total;
- (void)putStart:(int64_t)current total:(int64_t)total;
@end

@interface Open_im_sdk_callbackSendMsgCallBack : NSObject <goSeqRefInterface, Open_im_sdk_callbackSendMsgCallBack> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onProgress:(long)progress;
- (void)onSuccess:(NSString* _Nullable)data;
@end

#endif
