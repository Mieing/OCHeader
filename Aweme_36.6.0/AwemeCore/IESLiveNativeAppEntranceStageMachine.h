@class NSString, NSMutableArray;

@interface IESLiveNativeAppEntranceStageMachine : NSObject

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) unsigned long long currentStage;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *currentStageDesc;
@property (retain, nonatomic) NSString *stageExtra;
@property (retain, nonatomic) NSMutableArray *stageArray;

- (id)buildMonitorModel;
- (id)entranceSourceInString;
- (id)currentStageInString;
- (id)stageDescResloved;
- (id)initWithAppID:(id)a0 linkType:(unsigned long long)a1;
- (id)nextStage:(unsigned long long)a0 stageDesc:(id)a1 extra:(id)a2;
- (id)stopMachine;
- (void).cxx_destruct;

@end
