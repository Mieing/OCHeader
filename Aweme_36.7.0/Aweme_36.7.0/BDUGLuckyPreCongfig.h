@class NSArray;

@interface BDUGLuckyPreCongfig : BDUGLuckyBDModel

@property (nonatomic) long long preloadFeedDelay;
@property (copy, nonatomic) NSArray *preloadPages;
@property (copy, nonatomic) NSArray *prefetchPages;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
