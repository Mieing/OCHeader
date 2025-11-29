@class NSString, IESLiveBattleDrawPropAnimationQueue;

@interface IESLiveBattleDrawViewModel : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveBattleDrawPropAnimationQueue *drawQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)clearAllNodes;
- (BOOL)checkMessageIsVaild:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
