@class NSString, RTVVoipSession, NSMapTable;
@protocol RTVXRControllerInjector, RTVSettingsManager, RxInjector;

@interface __RTVSessionSettingManager : NSObject <RTVXRControllerInterface, RTVSessionSettingManager> {
    struct RecursiveMutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (retain, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, nonatomic) NSMapTable *injectedSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)settingValueForKey:(id)a0 defaultValue:(id)a1;
- (id)roomABValueWithVoipModel:(id)a0 forKey:(id)a1 defaultValue:(id)a2;
- (void)injectorSettings:(id)a0 object:(id)a1;
- (void)removeSettingsForObject:(id)a0;
- (id)__roomABValueForKey:(id)a0;
- (id)__roomABV2ValueForKey:(id)a0 voipModel:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
