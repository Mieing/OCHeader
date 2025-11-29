@class NSString, NSObject;
@protocol AWEPlayInteractionPlayletGuideWrapperProtocol;

@interface AWEPlayInteractionCenterButtonPlayletRecommendElement : AWEPlayInteractionPlayletRecommendElement <AWEPlayInteractionPlayletGuideWrapperDelegate>

@property (retain, nonatomic) NSObject<AWEPlayInteractionPlayletGuideWrapperProtocol> *guideButtonWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)layoutWithGuideButton:(id)a0 margin:(double)a1;
- (BOOL)goToInnerFeedWithSchema:(id)a0 nextEpisode:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)context;

@end
