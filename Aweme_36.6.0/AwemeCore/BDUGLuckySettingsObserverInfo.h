@protocol BDUGLuckySettingsObserver;

@interface BDUGLuckySettingsObserverInfo : NSObject

@property (nonatomic) unsigned long long settingsType;
@property (nonatomic) long long pollingInterval;
@property (weak, nonatomic) id<BDUGLuckySettingsObserver> observer;
@property (nonatomic) double lastUpdateTime;

- (id)initWithSettingsType:(unsigned long long)a0 pollingInterval:(long long)a1 observer:(id)a2;
- (void).cxx_destruct;

@end
