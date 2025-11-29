@class NSArray, NSDictionary, NSString, AWENewPublishGameCPReeditTableCell, AWEStudioVideoAnchorModel;

@interface AWEPostPageGameCPReeditElement : AWEPostPageAnchorCheckCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWENewPublishGameCPReeditTableCell *gameCPReeditCell;
@property (copy, nonatomic) NSArray *suggestionModels;
@property (copy, nonatomic) NSDictionary *originAnchorContentDict;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWEStudioVideoAnchorModel *initialAnchor;
@property (nonatomic) long long invisibleReason;
@property (nonatomic) BOOL hasInvisibleReasonLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)publishViewModel;
- (void)configUI;
- (void)elementAppear;
- (BOOL)enableGameAndCompanyCouponLogicOp;
- (id)companyCouponService;
- (id)localLife;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (void)reportTrackerWithEvent:(id)a0 extra:(id)a1;
- (long long)anchorRequestPublishItemType;
- (id)traceReeditParams;
- (void)reportGeneralAnchorEntranceShowTracker;
- (BOOL)hasNotGameCPAnchorBusinessWithInitAnchor;
- (BOOL)hasNotGameCPAnchorBusiness;
- (BOOL)isEmptySnapshotAnchor;
- (id)gameCPAnchorPublishModel;
- (BOOL)needShowPOITradeOrCompanyCoupon;
- (BOOL)hasPromoteGameCPAnchorModel;
- (void)addAnchorObserver;
- (void)updateReeditGameCPViewWithJsonString:(id)a0 needCacheAnchorInfo:(BOOL)a1;
- (void)traceClickAnchor;
- (id)getDidSelectedTags;
- (id)getSuggestionTags;
- (void)reeditGameCPAddAnchorJSBNotification:(id)a0;
- (id)tagRecommendService;
- (void)clearReeditGameAnchorData;
- (BOOL)hasNotGameCPAnchorBusinessWithAnchorModel:(id)a0;
- (void)logInvisibleReasonIfNeed;
- (void).cxx_destruct;
- (id)groupID;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (id)cell;
- (void)didSelect;

@end
