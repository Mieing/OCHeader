@class NSDate;

@interface AWEEcomImageSearchPreRequestHelper : NSObject

@property (retain, nonatomic) NSDate *latestRequestTime;
@property (nonatomic) double latestStartTime;

+ (id)sharedHelper;

- (void)requestWithRouterModel:(id)a0 image:(id)a1;
- (void)requestWithRouterModel:(id)a0;
- (void).cxx_destruct;

@end
