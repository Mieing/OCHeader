@class CLLocation;

@interface WCFinderCachedLocation : NSObject

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) double cachedTimeStamp;

+ (id)cachedLocationWithLocation:(id)a0;
+ (id)cachedLocationWithLocation:(id)a0 cachedTime:(double)a1;

- (void)updateCachedTimeToNow;
- (void).cxx_destruct;

@end
