@class HTSEventContext, NSMutableDictionary, NSString;

@interface IESLiveNativeAppDurationCostHelper : NSObject <IESLiveNativeAppDurationCostHelper>

@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (retain, nonatomic) NSMutableDictionary *durationCostDict;
@property (nonatomic) double createTime;
@property (nonatomic) double createMediaTime;
@property (retain, nonatomic) NSMutableDictionary *chooseTmpDict;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) double enterRoomTimestampMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeMonitor;
- (void)updateRecord:(long long)a0 stage:(long long)a1 extra:(id)a2;
- (void)openDropFpsMonitorWithScene:(id)a0;
- (void)tractEvent:(id)a0 customParams:(id)a1 srcParams:(id)a2;
- (void)anchorItemShowWithStage:(long long)a0 extra:(id)a1;
- (void)audienceItemShowWithKey:(id)a0 event:(id)a1 stage:(long long)a2 extra:(id)a3;
- (void)shelfShowWithStage:(long long)a0 extra:(id)a1;
- (void)choosePageShowWithStage:(long long)a0 extra:(id)a1;
- (void)selectPageShowWithKey:(id)a0 event:(id)a1 stage:(long long)a2 extra:(id)a3;
- (id)dictViaName:(id)a0 stage:(long long)a1;
- (void)addTimeStamp:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
