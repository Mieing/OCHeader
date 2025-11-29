@class NSString, AWERVLVLoginGuideViewController, AWEAwemeModel, UIViewController;
@protocol AWERTVInviteViewController;

@interface AWERVLVInviteWatchPanelViewModel : AWERVLVBasePanelViewModel <AWEPadRTVGuideTargetProtocol, AWERVLVSlidingPanelProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERVLVLoginGuideViewController *guideVC;
@property (retain, nonatomic) UIViewController<AWERTVInviteViewController> *feedShareView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadRTVAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)panelID;
- (id)panelVC;
- (id)aAWEPadRTVAdapter;
- (void)padAdapter_triggerInviteWatchToolTip;
- (void)startRequestAnimating;
- (void)refreshModel:(id)a0 params:(id)a1;
- (BOOL)canScrollToDownDirection;
- (void)panelDidLoad;
- (void)panelDidAppear;
- (BOOL)slidingPanelAvailable;
- (id)slidingPanelTitle;
- (void)didScrollToPanel:(BOOL)a0 prevPanel:(id)a1;
- (void)didPanelButtonClicked;
- (void)scrollPanelToTop;
- (void)scrollPanelToTop:(BOOL)a0;
- (void)didScrollToPanel:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })scrollOffset;

@end
