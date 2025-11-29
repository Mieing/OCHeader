@class NSString;

@interface AWERequestVidFeatureService : HTSService <AWERequestVidFeatureServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEnableShootCaptureAndInspirationRequestFeatureInfoStatus;
- (void)requestFeatureInfoForAwemeModel:(id)a0 isNeedInAlumbRequestStatus:(BOOL)a1 completeHandler:(id /* block */)a2;
- (void)requestFeatureInfoWithModel:(id)a0 completeHandler:(id /* block */)a1;
- (void)requestFeatureInfoWithVidFeatures:(id)a0 completeHandler:(id /* block */)a1;
- (void)requestFeatureInfoForStickerModel:(id)a0 completeHandler:(id /* block */)a1;
- (void)requestFeatureInfoForTemplateModel:(id)a0 completeHandler:(id /* block */)a1;
- (BOOL)isValidFeatureModelStatus:(id)a0;
- (id)inputDataSearchExtension:(id)a0 requestFeatureModel:(id)a1;
- (id)searchSuggestionFeatureConfigWithRequestFeatureModel:(id)a0;
- (id)onlySupportPersonSearchSuggestionFeatureConfig;
- (id)trackerCommandParamsWithInputData:(id)a0;
- (void)trackerPerformanceFollowUseVideoFeaturesEventWithAwemeID:(id)a0 scene:(id)a1 hasFeaturesStatus:(BOOL)a2 fetchFeaturesStatus:(BOOL)a3;
- (id)abInfo;
- (long long)searchBarScanLimit;
- (id)personalRecommendGetWords;
- (BOOL)isRequestStatusWithAwemeModel:(id)a0;
- (void)p_requestFeatureInfoForAwemeModel:(id)a0 isNeedInAlumbRequestStatus:(BOOL)a1 completeHandler:(id /* block */)a2;
- (id)videoId:(id)a0;
- (id)awemeId:(id)a0;
- (id)sceneWithAwemeModel:(id)a0;
- (BOOL)isAIGCEffectStatusWithAwemeModel:(id)a0;
- (BOOL)isVimoOrPixelVideoTemplateStatusWithAwemeModel:(id)a0;
- (void)requestFeatureInfoWithVideoId:(id)a0 awemeId:(id)a1 scene:(id)a2 completeHandler:(id /* block */)a3;
- (void)trackerPerformanceFollowFetchVideoFeaturesEventWithAwemeID:(id)a0 scene:(id)a1 hasFeaturesStatus:(BOOL)a2 duration:(double)a3 errorCode:(int)a4 errorMsg:(id)a5;
- (id)jsonExtraToDict:(id)a0;
- (long long)searchTextParser;
- (long long)keyTagsMaxCount;
- (id)mainContentWithKeyTagsJsonString:(id)a0 keyTagsMaxCount:(unsigned long long)a1;
- (id)searchBarPlaceholderWithKeyTagsJsonString:(id)a0 keyTagsMaxCount:(unsigned long long)a1;
- (BOOL)isEnableAlbumPageShowTagStatus;
- (BOOL)isEnableSearchResultPageShowTagStatus;
- (unsigned long long)placeholderLiteralStyle;
- (id)placeholderLiteral;
- (BOOL)usePlaceholderAsSearchResultPageSearchWord;
- (BOOL)forceShowAllSearchResultForFollowVideoTemplate;
- (id)contentWithIsNotPermissionGrantedStatusWithKeyTagsJsonString:(id)a0;
- (id)jsonStringFromDictionary:(id)a0;

@end
