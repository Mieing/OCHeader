@class WCFinderLiveTabInfo, NSData, WCFinderNavLiveStreamCGI, NSMutableArray;

@interface AggregationHomePageTabInfoDataModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) WCFinderLiveTabInfo *tabInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *feedVMs;
@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) WCFinderNavLiveStreamCGI *requestCgi;
@property (nonatomic) unsigned long long refreshInterval;
@property (nonatomic) BOOL isFirstPageRequestFinished;

- (id)initWithTabInfo:(id)a0 type:(unsigned long long)a1;
- (void)resetModelState;
- (id)removeSkeletonDatas;
- (void).cxx_destruct;

@end
