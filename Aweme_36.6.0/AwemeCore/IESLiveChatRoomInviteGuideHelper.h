@class RACCompoundDisposable, IESLiveChatRoomInviteGuideConfig, IESLiveChatRoomInviteGuideView, NSString, HTSLiveLinkMicFriendOnlineMessage;
@protocol IESLiveChatRoomInviteGuideHelperDeleagte;

@interface IESLiveChatRoomInviteGuideHelper : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) HTSLiveLinkMicFriendOnlineMessage *onlineMessage;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) IESLiveChatRoomInviteGuideView *guideView;
@property (retain, nonatomic) IESLiveChatRoomInviteGuideConfig *config;
@property (weak, nonatomic) id<IESLiveChatRoomInviteGuideHelperDeleagte> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithConfig:(id)a0 andDelegate:(id)a1;
- (void)showGuideView;
- (void)removeGuideView;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
