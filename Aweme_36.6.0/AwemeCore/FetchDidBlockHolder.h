@class NSString, NSLock;

@interface FetchDidBlockHolder : NSObject

@property (copy, nonatomic) id /* block */ fetchDidBlock;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) id /* block */ settingConfigBlock;

+ (id)shareInstance;

- (void)setBlock:(id /* block */)a0 appID:(id)a1;
- (void)fetchDeviceID;
- (id)fetchSettingConfig;
- (void)setSettingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
