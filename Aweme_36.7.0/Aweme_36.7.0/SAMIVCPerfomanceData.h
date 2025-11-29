@class NSString, NSMutableDictionary;

@interface SAMIVCPerfomanceData : NSObject

@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) unsigned long long cacheStatus;
@property (nonatomic) double startTime;
@property (nonatomic) double extractTime;
@property (nonatomic) double uploadTime;
@property (nonatomic) double fetchTime;
@property (nonatomic) double downloadTime;
@property (nonatomic) double totalTime;
@property (nonatomic) double assetDuration;
@property (nonatomic) long long errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned long long errPhase;
@property (readonly, nonatomic) double totalDuration;

- (void)taskStartWithCacheStatus:(unsigned long long)a0;
- (void)finishPhase:(unsigned long long)a0 errCode:(long long)a1 msg:(id)a2 extraInfo:(id)a3;
- (id)performanceDataDic;
- (void).cxx_destruct;
- (id)init;

@end
