@class NSString, NSArray, NSDictionary, IESForestSwitches, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IESForestConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSNumber *cdnTimeoutInterval;
@property (retain, nonatomic) NSNumber *disableGecko;
@property (retain, nonatomic) NSNumber *disableBuiltin;
@property (retain, nonatomic) NSNumber *disableCDN;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (retain, nonatomic) NSNumber *runWorkflowInGlobalQueue;
@property (copy, nonatomic) NSArray *fetcherSequence;
@property (copy, nonatomic) NSDictionary *defaultPrefixToAccessKey;
@property (copy, nonatomic) NSDictionary *defaultPrefixToChannelExtra;
@property (copy, nonatomic) IESForestSwitches *switches;
@property (copy, nonatomic) NSString *containerName;
@property (retain, nonatomic) NSNumber *cancelAllRequestWhenDealloc;
@property (retain, nonatomic) NSNumber *enableInstanceMemoryCache;
@property (retain, nonatomic) NSNumber *generalMemoryCacheSize;
@property (retain, nonatomic) NSNumber *preloadMemoryCacheSize;
@property (copy, nonatomic) NSDictionary *customParameters;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
