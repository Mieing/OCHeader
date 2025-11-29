@class NSString, AWEModernFeedTagView, AWEGeneralSearchVideoCardModel, AWEModernFeedNormalTagView, UIView, AWEModernFeedVideoFooterLynxView, AWEModernFeedVideoFooterNativeView;

@interface AWESearchVideoCardAnchorComponent : AWESearchComponent <AWEModernFeedVideoFooterLynxViewDelegate, AWESearchVideoCardAnchorComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEModernFeedTagView *tagView;
@property (retain, nonatomic) AWEModernFeedNormalTagView *normalTagView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEModernFeedVideoFooterLynxView *footerLynxView;
@property (retain, nonatomic) AWEModernFeedVideoFooterNativeView *footerNativeView;
@property (nonatomic) BOOL ironManClicked;
@property (nonatomic) BOOL enableFixGeneralCachalotSearchShowError;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (BOOL)enableAnchorOpt;
+ (BOOL)shouldOuterAnchorShowWithAweme:(id)a0;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;

- (id)referString;
- (id)playerProvider;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidEndShowing;
- (void)componentViewDidStartShowing;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (void)onIronManButtonClicked:(id)a0;
- (void)shoppingCartClickAction;
- (void)onPoiButtonClicked:(id)a0;
- (void)onPlatformButtonClicked:(id)a0;
- (void)onMvButtonClicked:(id)a0;
- (void)onStickerButtonClicked:(id)a0;
- (void)trackEvent:(id)a0 message:(id)a1;
- (void)trackIronMan_in_video_tag;
- (void)jumpToMerchandiseWithRequest:(id)a0;
- (void)awe_enterPOIFullScreenPage;
- (void)updateSubviewsContent:(BOOL)a0;
- (void)trackAnchorShowWithType:(id)a0 extraParameter:(id)a1;
- (void)trackAnchorShowWithType:(id)a0;
- (void)trackAnchorEntranceShow;
- (void)sendShowEvent;
- (void)setModelOnly:(id)a0;
- (id)accessibilityElementsArr;
- (id)stickerSearchParams:(BOOL)a0;
- (id)p_context;
- (void)updateVideoFooterLynxView;
- (BOOL)shouldAdaptSearchUIQualityUpgrade;
- (void)onLynxOpenMixVideoNotification:(id)a0;
- (void)footerLynxView:(id)a0 didChangedHeight:(double)a1;
- (void)didClickAnchorTagView;
- (void)_updateSubviewsWithModel:(id)a0 animated:(BOOL)a1;
- (id)logExtraAddSearchParams:(id)a0 searchParams:(id)a1;
- (id)searchResultParames;
- (void)trackAnchorEntranceShowForPOI;
- (id)gameIronManSearchParames;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateSubviewFramesWithIsNeedUpdateData:(BOOL)a0;
- (void)p_trackOldNativeAnchorShow;
- (void)p_super_updateSubviewFramesWithIsNeedUpdateData:(BOOL)a0;
- (void)setTagViewHidden:(BOOL)a0;
- (BOOL)hasNormalAnchorInfo;
- (id)model;
- (id)interactor;
- (void).cxx_destruct;
- (id)init;
- (id)logData;
- (id)componentView;
- (void)setupUI;
- (id)router;

@end
