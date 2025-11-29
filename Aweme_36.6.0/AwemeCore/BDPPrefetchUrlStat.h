@class NSNumber;

@interface BDPPrefetchUrlStat : NSObject

@property (retain) NSNumber *isHit;
@property (retain) NSNumber *isFinish;
@property (retain) NSNumber *isFailed;
@property (retain) NSNumber *isCached;

- (void).cxx_destruct;
- (id)init;

@end
