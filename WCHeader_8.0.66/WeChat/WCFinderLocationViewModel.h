@class NSString, FinderLbsLocation, WCFinderLbsFetchCgi, NSMutableDictionary, NSMutableArray, MMAssetInfo;
@protocol WCFinderLocationViewModelDelegate;

@interface WCFinderLocationViewModel : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *lastSearchWord;
@property (retain, nonatomic) FinderLbsLocation *materialLbsLocation;
@property (retain, nonatomic) FinderLbsLocation *searchMaterialLbsLocation;
@property (retain, nonatomic) WCFinderLbsFetchCgi *lastCgi;
@property (retain, nonatomic) NSMutableArray *respList;
@property (retain, nonatomic) NSMutableArray *configArray;
@property (retain, nonatomic) NSMutableDictionary *poiIdSetDic;
@property (nonatomic) BOOL hasTriggerNextPage;
@property (weak, nonatomic) id<WCFinderLocationViewModelDelegate> delegate;
@property (retain, nonatomic) MMAssetInfo *selectAssetInfo;

+ (id)convertLocationToLbsConfig:(id)a0;

- (id)initWithFinderUsername:(id)a0 selectedLocation:(id)a1 materialLbsLocation:(id)a2;
- (unsigned long long)getSearchSelectAssetInfoType;
- (id)getTitleTips;
- (id)getSearchPlaceholderTips;
- (id)getCgiStreamResponseBy:(int)a0;
- (void)mergeWithSelectedLocation:(id)a0;
- (BOOL)isSearchMaterialLbsScene;
- (id)getSelectedLocation;
- (id)getCurLbsConfig;
- (int)getCurPoiBusinessType;
- (long long)numberOfRows;
- (id)configOfIndex:(long long)a0;
- (void)removeNotShowPOI;
- (void)addNotShowPOI;
- (void)triggerFetchLbsListBySearchMaterialLbsLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)triggerFetchLbsListBySearchWord:(id)a0;
- (BOOL)sameAsRunningCgiRequest;
- (BOOL)enableShowExtractFromAsset;
- (void)handleCgiResponseDataBy:(id)a0;
- (void)loadTargetLbsMoreListCGI:(int)a0;
- (void)_fetchLbsListInfoByReqList:(id)a0;
- (id)getLocationByLbsType:(int)a0;
- (void)_fetchBottomLbsListCGI;
- (void)didSelectCurCellRowIndex:(long long)a0;
- (BOOL)poiHasSelected;
- (id)lbsLocation;
- (void)resetFetchLbsRequest;
- (BOOL)noMoreData;
- (BOOL)isOnSearchMaterialGPS;
- (void).cxx_destruct;

@end
