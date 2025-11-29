@class NSString, NSObject;
@protocol AWEPlayInteractionPlayletGuideWrapperProtocol;

@interface AWEPlayInteractionPlayletGuideController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayletGuideWrapperDelegate>

@property (retain, nonatomic) NSObject<AWEPlayInteractionPlayletGuideWrapperProtocol> *guideButtonWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndDisplayingBeforeReset;
- (void)layoutWithGuideButton:(id)a0 margin:(double)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)willDisplay;

@end
