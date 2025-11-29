@class NSArray, NSString;
@protocol RTVVoipSettingManagerInterface, RxInjector;

@interface RTVVoipNetworkSettingManager : NSObject <RTVVoipNetworkSettingManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (nonatomic) BOOL wsRequestEnable;
@property (copy, nonatomic) NSArray *webSocketApiConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)webSocketConfigOfApi:(id)a0;
- (void)updateRequestEnable:(BOOL)a0;
- (void)__webSocketConfigFromSetting;
- (void).cxx_destruct;

@end
