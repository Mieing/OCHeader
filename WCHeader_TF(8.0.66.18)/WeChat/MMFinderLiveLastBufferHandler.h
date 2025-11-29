@class NSData, NSDate;

@interface MMFinderLiveLastBufferHandler : NSObject

@property (retain, nonatomic) NSData *cachedData;
@property (nonatomic) unsigned long long usageCount;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (nonatomic) unsigned long long maxUsageCount;
@property (nonatomic) double expirationInterval;

- (id)initWithData:(id)a0 maxUsageCount:(unsigned long long)a1 expirationInterval:(double)a2;
- (void)setData:(id)a0;
- (id)getData;
- (void)resetData;
- (BOOL)shouldReset;
- (void).cxx_destruct;

@end
