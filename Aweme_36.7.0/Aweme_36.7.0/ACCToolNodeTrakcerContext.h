@class NSMutableDictionary;

@interface ACCToolNodeTrakcerContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackerLists;
@property (nonatomic) BOOL enableTracker;
@property (nonatomic) unsigned long long recordCount;

+ (id)shareManager;

- (double)timeIntervalForKey:(id)a0;
- (void)startRecordSubStepTracker:(id)a0 subStepEvent:(id)a1 singleSpecialTrackDict:(id)a2;
- (void)endRecordSubStepTracker:(id)a0 subStepEvent:(id)a1 singleSpecialTrackDict:(id)a2;
- (void)appendNodeTimeWithTrackerKey:(id)a0 trackerName:(id)a1;
- (void)appendExtraParams:(id)a0 trackerName:(id)a1;
- (void)sendTrackWithTrackName:(id)a0 sendTrackNecessaryKeys:(id)a1;
- (long long)timeDurationForTrackName:(id)a0 KeyNode:(id)a1;
- (void)endRecordSubTrackerTimeFromMain:(id)a0 identifier:(id)a1 subTrackEvent:(id)a2 specialTargetKey:(id)a3 specialTrackDict:(id)a4;
- (void)destroyWithTrackerName:(id)a0 identifier:(id)a1;
- (double)timeIntervalForKey:(id)a0 identifier:(id)a1;
- (void)removeTrackerWithTrackName:(id)a0 identifier:(id)a1;
- (void)startRecordTimeWithTrackerName:(id)a0 identifier:(id)a1;
- (void)appendExtraParams:(id)a0 trackerName:(id)a1 identifier:(id)a2;
- (void)startRecordSubStepTracker:(id)a0 identifier:(id)a1 subStepEvent:(id)a2 singleSpecialTrackDict:(id)a3;
- (void)endRecordSubStepTracker:(id)a0 identifier:(id)a1 subStepEvent:(id)a2 singleSpecialTrackDict:(id)a3;
- (void)appendRealTimeExtraParams:(id /* block */)a0 trackerNameList:(id)a1;
- (long long)startRecordTimeForKey:(id)a0;
- (void)removeTrakcerWithTrackName:(id)a0;
- (void)startRecordTimeWithTrackerName:(id)a0;
- (void)startRecordSubTrackerTimeFromMain:(id)a0 subTrackEvent:(id)a1;
- (void)sendTrackWithTrackName:(id)a0 sendTrackNecessaryKeys:(id)a1 needDestroyTrack:(BOOL)a2 singleSpecialTrackDict:(id)a3;
- (void)endRecordSubTrackerTimeFromMain:(id)a0 subTrackEvent:(id)a1 specialTargetKey:(id)a2 specialTrackDict:(id)a3;
- (void)destroyWithTrackerName:(id)a0;
- (void)startRecordTimeWithTrackerName:(id)a0 interval:(double)a1;
- (id)createNewTrackerWithName:(id)a0 interval:(double)a1;
- (void)appendNodeTimeWithTrackerKey:(id)a0 trackerNameList:(id)a1;
- (void)appendNodeTimeWithTrackerKey:(id)a0 trackerNameList:(id)a1 interval:(double)a2;
- (void)appendExtraParamsWithInputData:(id)a0 trackerNameList:(id)a1;
- (id)assembyParamsWithInputData:(id)a0;
- (void)appendExtraParams:(id)a0 trackerNameList:(id)a1;
- (id)p_generateBaseParamsDictWithPublishModel:(id)a0;
- (id)parallelInnerKeyWithTrackName:(id)a0 identifier:(id)a1;
- (id)createNewTrackerWithName:(id)a0 identifier:(id)a1;
- (double)getBaseTimeWithTrackerName:(id)a0;
- (void)endRecordAllSubStepTracker:(id)a0 singleSpecialTrackDict:(id)a1;
- (void)appendExtraParamsWithInputData:(id)a0 trackerName:(id)a1;
- (id)trackDicWithTrackName:(id)a0;
- (id)paramsDictWithTrackName:(id)a0;
- (void)trackItemShowWithPublishModel:(id)a0 nodeId:(id)a1 nodeName:(id)a2;
- (void)trackClickStyleItemWithPublishModel:(id)a0 nodeId:(id)a1 nodeName:(id)a2;
- (void)trackClickStyleOffNodeItemWithPublishModel:(id)a0;
- (void)startRecordSubTrackerTimeFromMain:(id)a0 identifier:(id)a1 subTrackEvent:(id)a2;
- (void)sendTrackWithTrackName:(id)a0 identifier:(id)a1 sendTrackNecessaryKeys:(id)a2 needDestroyTrack:(BOOL)a3 singleSpecialTrackDict:(id)a4;
- (void).cxx_destruct;

@end
