@class NSString;

@interface AWEAdSearchUtility : HTSService <AWEAdSearchUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowSearchAdNewPanel:(id)a0;
+ (void)searchAdNewPanelTrackQuestionSolid:(id)a0;
+ (id)trBcmFromModel:(id)a0;
+ (BOOL)isNewSearchImagesSliderOrGridStyle:(id)a0;
+ (struct CGSize { double x0; double x1; })getNewAdSearchImagesSliderOrGridSize:(id)a0;
+ (BOOL)isSearchAlbumInnerEnable:(id)a0;
+ (BOOL)shouldTrackSearchResultClick:(id)a0;
+ (BOOL)shouldShowAdLearnMoreLynxButton:(id)a0;
+ (id)searchAdLinkOptExtraDataWithModel:(id)a0;
+ (id)adTagLabelTextColorWithModel:(id)a0;
+ (id)adTagLabelTextColorWithLabel:(id)a0;
+ (id)adTagLabelBackgroundColorWithModel:(id)a0;
+ (id)adTagLabelBackgroundColorWithLabel:(id)a0;
+ (id)dictionaryToOriginalAdModel:(id)a0;
+ (BOOL)shouldActiveRelateSearchWithAweme:(id)a0 withContext:(id)a1;
+ (BOOL)relatedSearchConditionWithAweme:(id)a0 withContext:(id)a1;
+ (BOOL)shouldShowRelateSearchWithAweme:(id)a0 withContext:(id)a1;
+ (void)trackIronManWithModel:(id)a0 scene:(id)a1 event:(id)a2;
+ (id)generalSearchCommonParamsForTrack;
+ (id)searchEcommerceProductTrackParamsWith:(id)a0 adEventName:(id)a1;
+ (id)searchEcommerceTrackParamsWith:(id)a0;
+ (id)searchEcommerceBTMStringWith:(id)a0 part:(long long)a1;
+ (id)searchEcommerceBTMTrackParamsWith:(id)a0 responder:(id)a1;
+ (id)searchEcommerceTrackParamsWith:(id)a0 enterFrom:(id)a1;
+ (id)searchEcommerceTrackParamsWith:(id)a0 enterFrom:(id)a1 searchParamsNeedLogExtra:(BOOL)a2;
+ (id)searchEcommerceTrackAdParamsWith:(id)a0 enterFrom:(id)a1;
+ (id)searchEcommerceTrackAdLogExtraWith:(id)a0 enterFrom:(id)a1;
+ (id)liveSearchEcommerceTrackAdParamsWith:(id)a0 needTokenType:(BOOL)a1 needIsAd:(BOOL)a2;
+ (id)liveSearchEcommerceTrackAdParamsWith:(id)a0 needTokenType:(BOOL)a1;
+ (id)searchEcommerceTrackLive2ImageAdParamsWith:(id)a0;
+ (id)searchEcommerceTrackLogExtraInPassThroughWith:(id)a0 enterFrom:(id)a1;
+ (BOOL)isLocalLife:(id)a0;
+ (BOOL)isLocalLifeLiveCard:(id)a0;
+ (BOOL)hasChallengeHashTagWithModel:(id)a0;
+ (id)searchParamsListItemIdWith:(id)a0;
+ (id)searchParamsTokenTypeWith:(id)a0;
+ (id)searchLiteRawAdDataWith:(id)a0 componentModel:(id)a1;
+ (id)getSpecifyBitrateImageModelFromAweme:(id)a0 index:(unsigned long long)a1 scene:(long long)a2;
+ (void)searchAdDeleteItemsOptWithDelLogParams:(id)a0 awemeList:(id)a1 completion:(id /* block */)a2;
+ (id)configDelPitayaDataWithCurrentAweme:(id)a0 deleteItemLogData:(id)a1 fromAdReport:(BOOL)a2;
+ (void)registerReportCallback:(BOOL)a0 dataList:(id)a1;
+ (void)updateEcomLiveParamsCell:(id)a0 withAwemeModel:(id)a1;
+ (id)searchEcommerceParamsWith:(id)a0 searchParamsNeedLogExtra:(BOOL)a1;
+ (BOOL)isSearchTRAd:(id)a0;
+ (struct CGSize { double x0; double x1; })getNewSearchImagesSliderSize:(id)a0;
+ (struct CGSize { double x0; double x1; })getNewSearchAlbumGridSize:(id)a0;
+ (BOOL)shouldUseSearchEntranceBarStyleWithContext:(id)a0;
+ (id)searchEcommerceTokenTypeWithModel:(id)a0;
+ (id)getItemParamsWithAweme:(id)a0;
+ (BOOL)isGeneralSearchADAlbum:(id)a0;
+ (BOOL)isGridToPictureProgress:(id)a0;
+ (id)searchParamsForFeedbackWithAweme:(id)a0;
+ (id)btmIDWith:(id)a0 area:(id)a1;


@end
