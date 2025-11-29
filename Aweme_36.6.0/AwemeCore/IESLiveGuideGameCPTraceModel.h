@class NSDictionary, NSArray, NSString;

@interface IESLiveGuideGameCPTraceModel : NSObject

@property (retain, nonatomic) NSDictionary *traceSettingDict;
@property (retain, nonatomic) NSArray *businessArray;
@property (retain, nonatomic) NSArray *eventArray;
@property (retain, nonatomic) NSArray *stepArray;
@property (nonatomic) BOOL traceEnable;
@property (copy, nonatomic) NSString *userId;

- (BOOL)traceStepEnable:(id)a0;
- (BOOL)stepInBlockList:(id)a0;
- (BOOL)typeArray:(id)a0 hasTypeName:(id)a1;
- (void)traceMonitorPromoteStepType:(unsigned long long)a0 params:(id)a1 metric:(id)a2 category:(id)a3;
- (id)stepNameWithType:(unsigned long long)a0;
- (void)traceMonitorPromoteStep:(id)a0 params:(id)a1 metric:(id)a2 category:(id)a3;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 userId:(id)a2;
- (void).cxx_destruct;

@end
