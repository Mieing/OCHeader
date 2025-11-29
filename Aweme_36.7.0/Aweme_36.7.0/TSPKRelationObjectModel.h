@class NSMutableArray, TSPKEventData;

@interface TSPKRelationObjectModel : NSObject

@property (retain, nonatomic) NSMutableArray *apiEvents;
@property (retain, nonatomic) TSPKEventData *latestActiveEvent;
@property (retain, nonatomic) TSPKEventData *latestActiveStartEvent;
@property (nonatomic) unsigned long long objectStatus;
@property (nonatomic) double updateTimeStamp;
@property (nonatomic) double reportTimeStamp;

- (BOOL)sameSinceLastReport;
- (id)checkUnreleaseStartAtTime:(double)a0 condition:(id)a1;
- (id)getLatestOpenEventData;
- (id)snapshotAtTime:(double)a0 condition:(id)a1;
- (void)removeLastStartBacktrace;
- (void)saveEventData:(id)a0;
- (void)saveStartData:(id)a0;
- (void)saveStopData:(id)a0;
- (void)saveInfoData:(id)a0;
- (void)saveDeallocData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
