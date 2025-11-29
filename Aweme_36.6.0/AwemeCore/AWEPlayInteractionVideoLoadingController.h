@class NSString, AWELoadingAndVolumeView;

@interface AWEPlayInteractionVideoLoadingController : AWEPlayInteractionBaseController <AWEPlayInteractionProgressCommonProtocol>

@property (retain, nonatomic) AWELoadingAndVolumeView *loadAndVolumeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playLoadingAnimation;
- (void)setContainerHidden:(BOOL)a0;
- (void)setUpEvent;
- (void)playLoadingAnimationAfterFeedReadyDelay;
- (void)addLoadAndVolumeView;
- (void)updateAnimationDelayStatusWithHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)stopLoadingAnimation;

@end
