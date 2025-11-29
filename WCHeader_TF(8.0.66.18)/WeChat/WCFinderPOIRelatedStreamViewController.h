@class WCFinderAnimationLoadingView, WCFinderPOIRelatedStreamViewModel, WCFinderTabPageView, NSMutableDictionary, ForwardMessageLogicController, NSString;

@interface WCFinderPOIRelatedStreamViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGeneralMonitorDelegate, WCFinderStreamLayoutDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderPOIRelatedStreamViewModelDelegate, WCFinderPOIRelatedUICollectionReusableViewDelegate, MMNavBarInteractiveDelegate, WCActionSheetDelegate, ForwardMessageLogicDelegate, WCFinderNearbyFlowViewControllerDelegate, WCFinderFeedFlowLiveCellDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderPOIRelatedStreamViewModel *viewModel;
@property (nonatomic) int entryScene;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) WCFinderTabPageView *tabPageView;
@property (retain, nonatomic) NSMutableDictionary *pageViewManagerDict;
@property (nonatomic) unsigned long long appearTime;
@property (retain, nonatomic) NSMutableDictionary *exposeTimeDict;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (nonatomic) unsigned long long enterTime;
@property (copy, nonatomic) NSString *traceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPOIParamsModel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)setupNavigationItem;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (id)fadeTintColor;
- (void)onReturn:(id)a0;
- (void)onAction:(id)a0;
- (void)sharePOIToFriend;
- (void)sharePOIToMoment;
- (void)reportTab:(id)a0 withEventType:(long long)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onFinderPoiHeaderViewNeedRefresh;
- (void)onFinderPoiTabListError;
- (long long)numberOfTabPageInFinderTabPageView:(id)a0;
- (id)headerViewInFinderTabPageView:(id)a0;
- (double)heightForHeaderViewInFinderTabPageView:(id)a0;
- (id)finderTabPageView:(id)a0 tabNameAtIndex:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })marginForTabContainerInFinderTabPageView:(id)a0;
- (id)finderTabPageView:(id)a0 pageViewAtIndex:(unsigned long long)a1;
- (double)topInsetOfFinderTabPageView:(id)a0;
- (void)finderTabPageView:(id)a0 alphaOfTabContainerChanged:(double)a1;
- (void)finderTabPageView:(id)a0 switchFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)onHeaderViewClickNaviAction;
- (void)onHeaderViewClickGoProfileAction;
- (void)onHeaderViewClickPhoneCallAction:(id)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
