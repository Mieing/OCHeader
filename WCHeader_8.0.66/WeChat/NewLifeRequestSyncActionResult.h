@class NSMutableArray;

@interface NewLifeRequestSyncActionResult : WXPBGeneratedMessage

@property (nonatomic) unsigned long long lastPrefetchTime;
@property (nonatomic) BOOL isPrefetchFreqLimit;
@property (nonatomic) BOOL hasNewLifeEntranceReddot;
@property (retain, nonatomic) NSMutableArray *waitNewLifeCtrlInfoList;

+ (void)initialize;

@end
