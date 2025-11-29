@class NSArray, NSString, NSDictionary, AWENewPublishAggregateAnchorTableViewCell, DUXBottomNotification;
@protocol AWEPostPageElementCenter;

@interface AWEPostPageAggregateAnchorElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWENewPublishAggregateAnchorTableViewCell *anchorTableViewCell;
@property (nonatomic) BOOL firstShowAIAnchor;
@property (nonatomic) BOOL tradeAnchorTracked;
@property (retain, nonatomic) DUXBottomNotification *hintView;
@property (weak, nonatomic) id<AWEPostPageElementCenter> elementCenter;
@property (nonatomic) BOOL isUserDelete;
@property (nonatomic) BOOL isViewDidAppear;
@property (retain, nonatomic) NSArray *recommendAnchorInfos;
@property (nonatomic) long long recommendViewUpdateSignalType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)publishAnchorArray;
- (id)poiService;
- (void)elementAppear;
- (void)bindServices:(id)a0;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)didSelectExternalAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1;
- (id)companyCouponService;
- (id)localLife;
- (void)setupCell:(id)a0;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)forceReceiveEvents;
- (BOOL)enablePoiAnchorNotMutex;
- (void)updatePublishRecommendUlikeAnchorParam;
- (void)addObserverForAnchorAutoRecommend;
- (void)trackAggregateAnchorEntranceExpose;
- (void)revertAnchorCell;
- (void)showAnchorLoadingIfNeeded:(id)a0 state:(long long)a1;
- (void)cancelSelectedAnchorWithJustRefreshUI:(BOOL)a0;
- (BOOL)enableAnchorAutoRecommend;
- (void)didClickAnchorCell;
- (void)showAnchorPanel;
- (void)trackAggregateAnchorEntranceClick;
- (void)judgeMutexWithPOIAnchorWithCompletion:(id /* block */)a0;
- (void)didClickAnchor;
- (id)jsonStringFromDictValues:(id)a0 limit:(unsigned long long)a1;
- (void)trackRecommendShootInfoBack:(id)a0;
- (void)trackRecommendShootPositionShow:(id)a0;
- (void)updateAnchorInfo:(id)a0;
- (id)mediaTypeForTrack;
- (id)gameCPService;
- (void)cancleSelectedAnchor:(id)a0;
- (void)didClickRecommendAnchor:(id)a0;
- (void)addRemindViewIfNeededWithCell:(id)a0;
- (void)p_didClickRecommendAnchor:(id)a0;
- (id)anchorContent:(id)a0 model:(id)a1;
- (void)trackAggregateAnchorEntranceShow;
- (id)textOfAnchorAccessLabel;
- (id)getAggregateAnchorEntranceTrackParams;
- (void).cxx_destruct;
- (void)startLoading;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)cell;
- (void)didSelect;
- (void)addObservers;

@end
