@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TSPKLock;

@interface TSPKCallStackFilter : NSObject

@property (copy, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *callStackFilterInfo;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL isUpdating;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (id)shared;

- (void)fixWithCache;
- (void)parseInfoToRules:(id)a0;
- (BOOL)fixRules;
- (void)updateWithConfigs:(id)a0;
- (BOOL)checkAllowCallWithDataType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
