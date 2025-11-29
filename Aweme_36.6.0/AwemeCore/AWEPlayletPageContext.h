@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEPlayletPageContext : AWEPageContext

@property (retain, nonatomic) NSMutableDictionary *preloadDataDic;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *trackCommonParams;
@property (copy, nonatomic) NSDictionary *searchLogExtra;
@property (nonatomic) BOOL usePreloadFeedData;
@property (nonatomic) BOOL useLocalRevisitData;
@property (nonatomic) BOOL useLocalDiggData;
@property (nonatomic) BOOL useLocalWidgetData;
@property (nonatomic) BOOL usePreloadSkylightData;
@property (nonatomic) BOOL loadSkylightTimeout;
@property (retain, nonatomic) NSMutableDictionary *channelRefreshLogExtra;
@property (copy, nonatomic) NSString *firstOpenWay;
@property (copy, nonatomic) NSString *transferParams;
@property (copy, nonatomic) NSString *requestScene;
@property (copy, nonatomic) NSString *forceInsertSource;
@property (copy, nonatomic) NSString *skylightBusinessParams;
@property (copy, nonatomic) NSString *insertSeriesIdlist;
@property (copy, nonatomic) NSString *isFeedSeriesInsert;

- (id)preLoadFeedData;
- (id)preloadSkylightData;
- (long long)hasRecordPreLoadDataDuration;
- (void)recordPreLoadFeedData:(id)a0;
- (void)recordPreloadSkylightData:(id)a0;
- (void).cxx_destruct;

@end
