@class NSDictionary, NSArray, NSString;

@interface IESLiveAnchorGameCPEntranceTraceModel : NSObject

@property (retain, nonatomic) NSDictionary *traceSettingDict;
@property (retain, nonatomic) NSArray *businessArray;
@property (retain, nonatomic) NSArray *eventArray;
@property (retain, nonatomic) NSArray *stepArray;
@property (nonatomic) BOOL traceEnable;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *userID;

- (id)initWithRoomID:(id)a0 userID:(id)a1;
- (BOOL)traceStepEnable:(id)a0;
- (BOOL)stepInBlockList:(id)a0;
- (BOOL)typeArray:(id)a0 hasTypeName:(id)a1;
- (void)traceMonitorPromoteStepType:(unsigned long long)a0 params:(id)a1 metric:(id)a2 category:(id)a3;
- (id)stepNameWithType:(unsigned long long)a0;
- (void)traceMonitorPromoteStep:(id)a0 params:(id)a1 metric:(id)a2 category:(id)a3;
- (void).cxx_destruct;

@end
