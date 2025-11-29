@class UIButton, ACCMVTemplateTabContentProvider, NSString, AWEVideoPublishViewModel, UILabel, ACCSlidingTabViewController, ACCAnimatedButton;

@interface ACCMVTemplatesTabViewController : UIViewController <ACCZoomContextOutterProviderProtocol, ACCMVWaterfallViewControllerProtocol, AWEVideoRecorderNavigationRouterOpenSecondaryVCProtocol>

@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *oneKeyMVButton;
@property (retain, nonatomic) ACCSlidingTabViewController *mvTemplatesTabViewController;
@property (retain, nonatomic) ACCMVTemplateTabContentProvider *contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ willEnterDetailVCBlock;
@property (copy, nonatomic) id /* block */ didAppearBlock;
@property (copy, nonatomic) id /* block */ didPickTemplateBlock;
@property (nonatomic) BOOL associatedRecordViewController;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })accui_emptyPageEdgeInsets;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (void)p_showSlidingTabViewController;
- (void)p_closeButtonPressed:(id)a0;
- (void)p_fetchCategoriesData;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
