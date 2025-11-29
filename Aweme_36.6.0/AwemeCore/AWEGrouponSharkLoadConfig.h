@class NSDictionary;

@interface AWEGrouponSharkLoadConfig : NSObject

@property (nonatomic) BOOL enablePrefetch;
@property (nonatomic) BOOL enablePreload;
@property (copy, nonatomic) NSDictionary *prefetchApis;

- (void).cxx_destruct;

@end
