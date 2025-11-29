@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEBaseDouPlusShareChannel : AWEShareBaseChannel <AWEShareItemDelegate, AWEShareFunction>

@property (nonatomic) BOOL itemBreaths;
@property (nonatomic) long long index;
@property (nonatomic) long long originalIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;

- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (BOOL)shouldShowLocalPromotionEntrance;
- (BOOL)shouldShowDouECP:(id)a0;
- (id)p_getImageFromGeckoWithName:(id)a0;
- (id)p_shareDefaultImage;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (BOOL)shouldMoveDouPlusIconToFifthPlace:(id)a0;
- (BOOL)prepareToShare;
- (id)fetchLocalPromotionTrackParams:(long long)a0;
- (id)getClickDouPlusTrackParamsNewEntrance:(BOOL)a0;
- (id)getDouPlusShowClickTrackParams;
- (void)handleLocalPromotion;
- (void)requestDouPlusXiaoDianCheckWithModel:(id)a0 secAnchorID:(id)a1 completionBlock:(id /* block */)a2;
- (void)openDouplusForDouType;
- (void)willDisplayChannel;
- (void)checkTargetIndexWithContext:(id)a0;
- (void)updateChannelOriginalIndex:(long long)a0 realIndex:(long long)a1;
- (BOOL)shouldShowLocalPromotionEntranceWithContext:(id)a0;
- (BOOL)share;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
