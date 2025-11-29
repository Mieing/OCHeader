@class NSString, NSMutableDictionary, UIViewController;
@protocol AWEPadSplitViewSecondaryController;

@interface AWEProfilePadBaseComponent : AWEProfileBaseComponent <AWEProfilePadServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *actionTypes;
@property (retain, nonatomic) NSMutableDictionary *hasTrackerItemIds;
@property (nonatomic) BOOL viewLoadFinish;
@property (nonatomic) BOOL viewAppeared;
@property (nonatomic) long long curTabType;
@property (copy, nonatomic) NSString *lastRecordUserID;
@property (nonatomic) BOOL enableSplitScreen;
@property (retain, nonatomic) UIViewController<AWEPadSplitViewSecondaryController> *secondaryController;
@property (copy, nonatomic) NSString *currentAuthorIDFromDetail;
@property (nonatomic) BOOL dismissFromSplit;
@property (readonly, nonatomic) BOOL isSplitScreen;
@property (nonatomic) BOOL isFromHomepageDetail;
@property (nonatomic) BOOL isPushByCommentInSplitScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadUserPageAdapterClass;

- (id)enterFrom;
- (void)trackStayTime;
- (void)startTimingForTrack;
- (void)handleAppBecomeActive;
- (void)updateViewForRotate;
- (id)aAWEPadUserPageAdapter;
- (void)closeSplitScreen;
- (id)postVC;
- (id)profileHeaderVC;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)enterFullScreenFromSplitScreen;
- (void)trackTabCellShowWithTabType:(long long)a0 models:(id)a1 orders:(id)a2;
- (void)removeTrackItemIDsWithTabType:(long long)a0;
- (BOOL)shouldReplaceDetailVideos;
- (void)replacePrimaryVideosWithDataController:(id)a0 initialIndex:(long long)a1;
- (void)updatePadGradientShowStatus:(BOOL)a0;
- (id)postWorkDataControllerFromDetail;
- (void)onBackButtonClicked:(id)a0;
- (id)padSplitUserPageController;
- (void)startTimingForTrackWithTabType:(long long)a0;
- (void)trackTabStayTimeWithTabType:(long long)a0;
- (id)getEnterMethodWithActionType:(unsigned long long)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)publisher;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)handleAppWillResignActive;
- (void)onInit;
- (void)viewWillDisappear;
- (void)p_addObservers;

@end
