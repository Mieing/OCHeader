@class AWEAwemeModel, DUXBaseImageView, DUXBaseLabel, UIView, NSString, AWEUILoadingView, NSDictionary, AWEDCFeedShimmerView, DUXBaseButton;
@protocol AWEDCFeedTidyModelOuterDataControllerProtocol;

@interface AWEDCFeedTidyModelImageRouterViewController : UIViewController <AWEDCFeedTidyModelImageRouterViewControllerProtocol, AWEZoomTransitionInnerContextProvider>

@property (retain, nonatomic) AWEAwemeModel *tidyModel;
@property (weak, nonatomic) id<AWEDCFeedTidyModelOuterDataControllerProtocol> dataController;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) AWEUILoadingView *UILoadingView;
@property (retain, nonatomic) DUXBaseButton *backButton;
@property (retain, nonatomic) UIView *optHeaderContainerView;
@property (retain, nonatomic) DUXBaseImageView *optBackView;
@property (retain, nonatomic) DUXBaseImageView *optUserView;
@property (retain, nonatomic) DUXBaseLabel *optUserLabel;
@property (retain, nonatomic) DUXBaseImageView *optMainImageView;
@property (retain, nonatomic) DUXBaseLabel *optTitleLabelLine1;
@property (retain, nonatomic) DUXBaseLabel *optTitleLabelLine2;
@property (retain, nonatomic) DUXBaseLabel *optTitleLabelLine3;
@property (retain, nonatomic) AWEDCFeedShimmerView *shimmerView;
@property (nonatomic) BOOL enableDCFeedChunk;
@property (retain, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (void)backButtonClicked;
- (id)initWithTidyModel:(id)a0 dataController:(id)a1 referString:(id)a2 requestFinishBlock:(id /* block */)a3 enableDCFeedChunk:(BOOL)a4;
- (id)initWithTidyModel:(id)a0 dataController:(id)a1 requestFinishBlock:(id /* block */)a2;
- (void)fetchFullData;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)fetchData;
- (double)animationDuration;
- (void)viewDidLoad;

@end
