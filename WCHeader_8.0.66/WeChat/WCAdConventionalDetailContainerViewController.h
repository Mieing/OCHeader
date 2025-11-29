@class WCDataItem, WCAdConventionalHalfScreenCustomBackgroundView, MMPageSheetAdapter, NSString, WCAdCardBtnInfo;
@protocol WCAdConventionalDetailContainerViewControllerDelegate;

@interface WCAdConventionalDetailContainerViewController : MMUIViewController <MMPageSheetAdapterDelegate, WCAdConventionalHalfScreenCustomBackgroundViewDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdCardBtnInfo *actionInfo;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (retain, nonatomic) WCAdConventionalHalfScreenCustomBackgroundView *customBackgroundView;
@property (nonatomic) BOOL isPageSheetViewFullyVisible;
@property (nonatomic) BOOL isPageSheetViewClosedByUser;
@property (weak, nonatomic) id<WCAdConventionalDetailContainerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)fetchDetailPageSheetHeight;

- (id)initWithDataItem:(id)a0 clickActionInfo:(id)a1 scene:(unsigned long long)a2;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onNaviBarCloseButtonClicked;
- (BOOL)isInHalfScreenMode;
- (void)dismissMyselfForce:(BOOL)a0;
- (void)removeMyselfDirectly;
- (void)removeMyselfGently;
- (void)showHalfScreenFromViewController:(id)a0 animated:(BOOL)a1;
- (void)dismissPageSheetWithAnimated:(BOOL)a0;
- (BOOL)isDetailContainerPageSheetClosedByUser;
- (double)fetchHalfScreenDetailContainerHeight;
- (id)fetchPageSheetAdapter;
- (id)getAdSheetAdapter;
- (id)onCustomBackgroundViewHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)pageSheetWillClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetPresentAnimateDidEnd:(id)a0;
- (void)pageSheetDidChangeVisibleHeight:(id)a0 toHeight:(double)a1;
- (void).cxx_destruct;

@end
