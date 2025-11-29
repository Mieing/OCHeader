@class ACCAIGCSlidingTabViewController, AWEVideoPublishViewModel, NSString, UIView, ACCAIGCTemplateTabContentProvider, ACCAnimatedButton;

@interface ACCAIGCTemplatesViewController : UIViewController <ACCAIGCWaterfallViewControllerProtocol, AWEVideoRecorderNavigationRouterOpenSecondaryVCProtocol>

@property (retain, nonatomic) ACCAIGCSlidingTabViewController *slidingTab;
@property (retain, nonatomic) ACCAIGCTemplateTabContentProvider *contentProvider;
@property (retain, nonatomic) UIView *tabbarBackgroundView;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) ACCAnimatedButton *createButton;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ willEnterDetailVCBlock;
@property (copy, nonatomic) id /* block */ didAppearBlock;
@property (copy, nonatomic) id /* block */ creatAIGCBlock;
@property (copy, nonatomic) id /* block */ takeSameBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL associatedRecordViewController;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)trackAIGCCommonInfo;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (void)p_fetchPanelData;
- (void)trackEnterAIGCCreate;
- (void)trackNetWorkDuration:(double)a0 Error:(id)a1 Iscache:(BOOL)a2;
- (void)p_showSlidingTabViewController;
- (void)p_updateEmpteStateWithError:(id)a0;
- (void)p_closeButtonPressed:(id)a0;
- (void)p_createButtonPressed:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;

@end
