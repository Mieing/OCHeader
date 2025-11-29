@class NSDictionary, NSArray;

@interface AWEKefuABConfigManager : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) BOOL requireListenSignalInKeyWindow;
@property (readonly, nonatomic) BOOL sendWebEventByCenter;
@property (readonly, nonatomic) long long onRTCDisConnectAutoCloseIntervalMs;
@property (readonly, nonatomic) NSArray *findPageTypes;
@property (readonly, nonatomic) NSArray *windowPageRecoverTypes;
@property (readonly, nonatomic) double windowLevel;
@property (readonly, nonatomic) BOOL allowHookSignals;
@property (readonly, nonatomic) BOOL allowHookKefuWindow;
@property (readonly, nonatomic) double hidePageProtectTime;

+ (id)sharedInstance;

- (id)p_defaultConfig;
- (void).cxx_destruct;
- (id)init;

@end
