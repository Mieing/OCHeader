@interface AWEIMFTSTrackClodStartSyncData : NSObject

@property (nonatomic) double startTimeInterval;
@property (nonatomic) double endTimeInterval;
@property (nonatomic) long long type;
@property (nonatomic) long long count;

- (void)recordStartWithTimeInterval:(double)a0;
- (void)recordEndWithTimeInterval:(double)a0;
- (id)toDictionary;

@end
