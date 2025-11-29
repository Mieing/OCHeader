@interface AWEStorageServiceConfig : NSObject

@property (nonatomic) BOOL enableMMKVMonitor;
@property (nonatomic) long long MMKVMaxCount;

+ (id)sharedInstance;

- (void)loadConfig;
- (id)init;

@end
