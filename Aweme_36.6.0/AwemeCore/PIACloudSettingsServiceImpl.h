@class NSDictionary, NSMutableArray, NSRecursiveLock;

@interface PIACloudSettingsServiceImpl : NSObject

@property (copy, nonatomic) NSDictionary *settings;
@property (nonatomic) double lastFetchSuccessfullyTime;
@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSRecursiveLock *observerLocker;
@property (retain, nonatomic) NSMutableArray *observers;

+ (id)sharedInstance;

- (void)fetchCloudSettings:(id)a0;
- (id)getOriginSettings;
- (void)registerSettingHandler:(id)a0;
- (id)generateCloudSettingsRequestParameters;
- (id)updateDataBaseFromSettings:(id)a0;
- (void).cxx_destruct;
- (id)objectValueForKey:(id)a0;
- (id)init;

@end
