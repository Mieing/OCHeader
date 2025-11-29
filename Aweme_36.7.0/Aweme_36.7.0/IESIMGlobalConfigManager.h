@class IESIMGlobalConfig;

@interface IESIMGlobalConfigManager : NSObject

@property (readonly, nonatomic) IESIMGlobalConfig *config;

+ (id)sharedInstance;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
