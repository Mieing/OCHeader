@class NSNumber, NSMutableArray;

@interface HunterPreloadDetailModel : NSObject

@property (retain, nonatomic) NSMutableArray *preloadResources;
@property (copy, nonatomic) NSNumber *totalRecursionCount;

- (id)initWithPreloadDetail;
- (void).cxx_destruct;

@end
