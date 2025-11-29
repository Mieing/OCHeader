@interface MMFinderLiveRecordMemObj : NSObject

@property (nonatomic) unsigned int currentTime;
@property (nonatomic) float curMem;

+ (id)liveRecordMemObjWithMem:(long long)a0;

- (id)liveRecordReportString;
- (id)genFinderSimpleDateTimeStringByTimestamp:(long long)a0;

@end
