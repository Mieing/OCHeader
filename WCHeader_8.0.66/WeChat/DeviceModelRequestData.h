@class NSString;

@interface DeviceModelRequestData : MMObject <PBCoding>

@property (nonatomic) unsigned int m_lastRequestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_lastRequestTime;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;
+ (id)loadFromFile;

- (id)getPBPropertyTable;
- (void)updateLastRequestTime;
- (BOOL)isTimeForRequestNewData;
- (id)init;
- (void)saveToCache;

@end
