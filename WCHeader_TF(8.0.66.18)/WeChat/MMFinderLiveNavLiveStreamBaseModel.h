@class FinderLiveSquareStyleInfo, FinderLiveStreamGetAsyncLoadInfoConfig, NSArray, NSData, FinderNavLiveStreamPreloadControlConfig, NSMutableArray, FinderLivePreloadInfo;

@interface MMFinderLiveNavLiveStreamBaseModel : NSObject

@property (retain, nonatomic) NSMutableArray *containerModelList;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (nonatomic) unsigned long long prefechMinInterval;
@property (nonatomic) unsigned long long refreshInterval;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long requestId;
@property (nonatomic) BOOL skipGetAllLiveTabs;
@property (nonatomic) BOOL skipAsyncLoadLiveInfo;
@property (nonatomic) BOOL skipFeedsReport;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig;
@property (nonatomic) unsigned long long autoPlayFlag;
@property (retain, nonatomic) FinderNavLiveStreamPreloadControlConfig *preloadControlConfig;
@property (retain, nonatomic) NSArray *allDataArray;

- (BOOL)isValidToSaveToDataCache;
- (void).cxx_destruct;

@end
