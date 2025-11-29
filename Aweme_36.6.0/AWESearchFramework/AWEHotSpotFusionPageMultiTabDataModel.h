@class NSArray, AWEGeneralCachalotDataController, AWESearchResultCachalotResponseParams, AWESearchGeneralCachalotDataResponse;

@interface AWEHotSpotFusionPageMultiTabDataModel : NSObject

@property (retain, nonatomic) AWEGeneralCachalotDataController *dataController;
@property (retain, nonatomic) AWESearchGeneralCachalotDataResponse *dataResponse;
@property (nonatomic) long long dataFromType;
@property (retain, nonatomic) AWESearchResultCachalotResponseParams *responseParams;
@property (copy, nonatomic) NSArray *viewModelList;
@property (nonatomic) long long loadMoreFooterState;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) BOOL enableCancelRequestingLoadMore;
@property (nonatomic) BOOL forceDisableAsyncLoadMore;
@property (nonatomic) BOOL pullRefreshHeaderEnable;
@property (nonatomic) BOOL didDataReady;
@property (nonatomic) BOOL needRefreshFromCard;
@property (retain, nonatomic) NSArray *selectTabBrotherViewModels;
@property (nonatomic) long long insetBResetedOffset;
@property (nonatomic) double contentInsetB;
@property (nonatomic) BOOL autoPreloadMore;

- (void).cxx_destruct;

@end
