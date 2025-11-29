@class NSString, NSMutableArray;

@interface FinderLiveNavStreamStatus : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (nonatomic) int loadingType;
@property (nonatomic) unsigned long long statusFlag;
@property (nonatomic) unsigned int loadingTimeMs;
@property (retain, nonatomic) NSMutableArray *feedsStatus;
@property (nonatomic) unsigned int loadingCnt;
@property (retain, nonatomic) NSString *reportUniqueKey;
@property (nonatomic) unsigned long long eventTime;
@property (nonatomic) unsigned long long loadingEndTime;

+ (void)initialize;

@end
