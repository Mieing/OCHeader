@class NSString, NSMutableDictionary, NSArray, NSDictionary, NSMutableArray;

@interface ACCToolPerformanceNodeTrakcer : NSObject

@property (copy, nonatomic) NSString *trackName;
@property (nonatomic) double standardTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasCallStandardMethod;
@property (retain, nonatomic) NSMutableDictionary *trackRecordDictonary;
@property (retain, nonatomic) NSMutableDictionary *subEventTrackRecordDictonary;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSArray *sendStrackNecessaryKeyList;
@property (copy, nonatomic) id /* block */ sendTrackCompletedHandler;
@property (retain, nonatomic) NSDictionary *defaultParams;
@property (retain, nonatomic) NSMutableArray *realTimeParamLists;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) ACCToolPerformanceNodeTrakcer *mainNodeTrack;
@property (retain, nonatomic) NSMutableArray *subStepTrackRecordArray;

- (id)paramsDictionary;
- (unsigned long long)startRecordTime;
- (id)trackDictionary;
- (void)destroyThisNode;
- (id)initWithTrackName:(id)a0;
- (void)setStandardCurrentMediaTimeWith:(double)a0;
- (void)appendDefaultParams:(id)a0;
- (void)sendTrackCompleted:(id /* block */)a0;
- (void)recordSubEventTimeWith:(id)a0 appendCurrentTime:(double)a1;
- (void)startSendTack:(BOOL)a0 singleSpecialTrackDict:(id)a1;
- (void)endSubEventRecordTimeWith:(id)a0 appendCurrentTime:(double)a1 specialTargetKey:(id)a2 specialTrackDict:(id)a3;
- (void)appendNodeTimeWithKey:(id)a0 appendCurrentTime:(double)a1;
- (void)appendRealTimeParams:(id /* block */)a0;
- (void)startSendTrackNecessaryConditionWithKeys:(id)a0;
- (double)timeIntervalFromStart;
- (double)getStartTimeInterval;
- (void)appendNodeTime:(double)a0 key:(id)a1;
- (void)realTrackWithParam:(id)a0 needDestroyTrack:(BOOL)a1;
- (void).cxx_destruct;

@end
