@class NSDictionary;

@interface AWEECNaPrefetchRequestConfig : NSObject

@property (nonatomic) BOOL addReusePool;
@property (copy, nonatomic) NSDictionary *monitorInfo;
@property (copy, nonatomic) NSDictionary *perfTiming;

- (void).cxx_destruct;

@end
