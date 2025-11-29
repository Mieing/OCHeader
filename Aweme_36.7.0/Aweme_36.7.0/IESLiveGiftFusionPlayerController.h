@class IESLiveRebornGiftAnimationNode;
@protocol IESLiveGiftFullLinkMonitor, IESLivePerfSampler, IESLiveGiftFusionPlayerAdapterProtocol;

@interface IESLiveGiftFusionPlayerController : NSObject

@property (retain, nonatomic) IESLiveRebornGiftAnimationNode *node;
@property (retain, nonatomic) id<IESLiveGiftFusionPlayerAdapterProtocol> adapter;
@property (weak, nonatomic) id<IESLiveGiftFullLinkMonitor> giftFullLinkMonitor;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (copy, nonatomic) id /* block */ sendMessage;

- (void)stopRunPerformSampler;
- (void)playTakeUntil:(id /* block */)a0;
- (void)interactGiftAnimationWillStart;
- (id)lynxPlayerConfig;
- (id)lynxPlayerHierarchy;
- (id)mp4PlayerConfig:(id)a0;
- (void)interactGiftAnimationDidFinish:(id)a0;
- (void)runPerformSampler;
- (id)initWithNode:(id)a0 adapter:(id)a1;
- (void).cxx_destruct;

@end
