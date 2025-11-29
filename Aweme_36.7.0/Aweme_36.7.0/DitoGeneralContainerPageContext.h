@class NSString, NSDictionary, AWEPOIDetailConstData, AWEPOIDetailStore, AWEPOIDetailResponse;

@interface DitoGeneralContainerPageContext : AWEPOIDitoPageContext

@property (copy, nonatomic) NSString *poiId;
@property (retain, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (retain, nonatomic) AWEPOIDetailStore *store;
@property (retain, nonatomic) AWEPOIDetailConstData *constData;
@property (nonatomic) double topHeaderOffset;
@property (copy, nonatomic) NSString *ttLogID;
@property (nonatomic) BOOL canShowBottomBar;
@property (nonatomic) BOOL isNewCollectGuide;
@property (copy, nonatomic) NSString *collectGuideSchema;
@property (nonatomic) unsigned long long pageModelState;
@property (nonatomic) BOOL hasAutoModalViewForGoodsDetail;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSDictionary *generalParams;
@property (retain, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) NSDictionary *utParams;
@property (nonatomic) unsigned long long loadMoreState;
@property (copy, nonatomic) NSDictionary *loadMoreParams;
@property (copy, nonatomic) NSDictionary *loadingViewTrackParams;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *preloadTargetTag;

- (BOOL)shouldUseModalViewExtension;
- (long long)modalViewBarStyle;
- (unsigned long long)headerPhotoStyleType;
- (BOOL)alwaysHalfScreen;
- (BOOL)shouldJumpAlbum;
- (double)initialModalViewRatio;
- (BOOL)shouldShowHotelInteraction;
- (BOOL)supportCloseByGesture;
- (BOOL)supportFullToHalf;
- (BOOL)mustCloseToHalf;
- (double)slowCloseCoefficient;
- (double)fastCloseCoefficient;
- (BOOL)enableOverScroll;
- (void)setPreloadTargetTag:(id)a0;
- (id)preloadTargetTag;
- (BOOL)shouldShowAlbumArrow;
- (void)updateWithRouter:(id)a0;
- (void).cxx_destruct;
- (id)topInset;

@end
