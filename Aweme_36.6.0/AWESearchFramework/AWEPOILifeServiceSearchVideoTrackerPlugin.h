@class AWESearchEventDispather, NSString;

@interface AWEPOILifeServiceSearchVideoTrackerPlugin : AWESearchPlugin <AWESearchVideoCardAuthorComponentEventProtocol, AWESearchVideoCardDescComponentEventProtocol, AWESearchVideoCardPlayerComponentEventProtocol>

@property (weak, nonatomic) AWESearchEventDispather *eventDispather;
@property (copy, nonatomic) NSString *strEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)receiveProtocolList;
- (BOOL)cellFrameModelIsBold;
- (id)tokenTypeForModel:(id)a0;
- (BOOL)isNowLiving:(id)a0;
- (void)didBecomeVisibleToUsersWithModel:(id)a0 bindedModel:(id)a1 episodeStage:(long long)a2 episodeTrackParams:(id)a3;
- (void)textTapActionWithFixDescClick:(BOOL)a0 model:(id)a1 awemeModel:(id)a2 bindedModel:(id)a3 textType:(id)a4 p_context:(id)a5;
- (void)didTapShowFullTextBlockWithFixDescClick:(BOOL)a0 model:(id)a1 awemeModel:(id)a2 bindedModel:(id)a3 textType:(id)a4 p_context:(id)a5;
- (void)trackSearchResultShowVideoWithParamsInfo:(id)a0;
- (void)trackSearchFeedEnterWithParamsInfo:(id)a0;
- (void)initLogExtraDict:(id)a0 withAwemeModel:(id)a1 model:(id)a2;
- (void)videoPlayerViewSingleTappedActionWithTrackerDict:(id)a0 model:(id)a1 bindedModel:(id)a2 albumCurrentIndex:(long long)a3 isFromDesc:(BOOL)a4 descClickStyle:(long long)a5 imageClickStyle:(long long)a6 albumImagesCount:(long long)a7;
- (void)trackVideoPlayButtonWithGuideView:(id)a0 model:(id)a1 bindedModel:(id)a2;
- (void)trackVideoPauseButtonWithGuideView:(id)a0 model:(id)a1 bindedModel:(id)a2;
- (void)trackVideoBottomBarShowWithModel:(id)a0;
- (void)trackImageAlbumSearchResultShowWithModel:(id)a0 bindedModel:(id)a1;
- (long long)videoAbstractStrategyWithBindedModel:(id)a0;
- (id)commentProvider;
- (void)trackSearchResultClick:(id)a0 withModel:(id)a1 bindedModel:(id)a2 p_context:(id)a3;
- (void)trackClickCommentBtnWithModel:(id)a0 bindedModel:(id)a1;
- (void)clickTextAreaToInFlow:(id)a0 withModel:(id)a1 bindedModel:(id)a2;
- (BOOL)openCommentPanelInflowWithBindedModel:(id)a0;
- (id)searchTransitionParams:(id)a0 withModel:(id)a1 bindedModel:(id)a2;
- (id)getGeneralSearchTrackBaseParamsWithModel:(id)a0 bindedModel:(id)a1;
- (id)getSlideButtonTypeWithModel:(id)a0 albumCurrentIndex:(long long)a1;
- (id)descTextTrackParamsWithBindedModel:(id)a0;
- (id)coCreateTrackParamsWithBindedModel:(id)a0;
- (void)searchADAlbumAdTextClickWithLabel:(id)a0 refer:(id)a1 adExtraData:(id)a2 model:(id)a3;
- (void)trackVSLiveShowWithModel:(id)a0 episodeTrackParams:(id)a1;
- (void)trackVSPremiereShowWithModel:(id)a0 episodeTrackParams:(id)a1;
- (void)trackLiveShowWithModel:(id)a0 bindedModel:(id)a1;
- (void).cxx_destruct;

@end
