@class HTSEventContext, NSString, IESLiveChatChannelAnimationQueueManager, NSNumber;

@interface IESLiveChatChannelAnimationController : NSObject <IESLiveAutoRotateAction, HTSLiveMessageSubscriber>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveChatChannelAnimationQueueManager *queueManager;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSNumber *currentChatChannelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentOrientationChanged:(long long)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithDIContext:(id)a0 trackContext:(id)a1;
- (void)handleChatChannelGreetEmoticonModel:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
