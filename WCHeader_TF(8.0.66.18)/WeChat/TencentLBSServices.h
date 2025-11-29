@class NSLock;

@interface TencentLBSServices : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) double lastPostLocationTime;
@property (nonatomic) double lastWifiTime;

+ (int)getAppNameWithApiKey:(id)a0;
+ (id)sharedInstance;

- (id)init;
- (BOOL)updateLastPostLocationTime;
- (BOOL)updateLastWifiTime;
- (void).cxx_destruct;

@end
