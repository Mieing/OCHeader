@class NSDictionary, NSString, NSMutableArray;

@interface AutoRepushManager : NSObject

@property (copy, nonatomic) NSDictionary *fpsDetectConfigDic;
@property (nonatomic) int detectIntervalMs;
@property (nonatomic) int singleThreshold;
@property (nonatomic) int fpsMinDiff;
@property (nonatomic) double fpsMinRatio;
@property (copy, nonatomic) NSString *fpsTriggerPeriods;
@property (retain, nonatomic) NSMutableArray *fpsTriggerPeriodsArray;
@property (nonatomic) int fpsTriggerPeriodsIndex;
@property (nonatomic) int skipDetectTime;
@property (nonatomic) int totalInvalidCnt;
@property (nonatomic) BOOL debugTest;

- (void)detectEncodeFps:(double)a0 withTransportFps:(double)a1;
- (void)ignoreDetect;
- (void).cxx_destruct;
- (id)init;
- (void)initWithConfig:(id)a0;
- (BOOL)getResult;

@end
