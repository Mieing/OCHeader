@class NSString;

@interface TVLPlayerItemAccessLogAvOutSyncEvent : TVLPlayerItemLogEvent

@property (nonatomic) int avOutSyncStartPts;
@property (nonatomic) int avOutSyncEndPts;
@property (copy, nonatomic) NSString *avOutSyncPtsInfo;

- (void).cxx_destruct;
- (id)init;

@end
