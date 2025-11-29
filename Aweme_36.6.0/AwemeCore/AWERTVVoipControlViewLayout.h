@class NSString;
@protocol RTVVoipConfigureManagerInterface, RTVStorageArea, RxInjector, RTVVoipSettingManagerInterface;

@interface AWERTVVoipControlViewLayout : NSObject <RTVVoipControlViewLayoutInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)__isAudioCallWithVoipType:(long long)a0;
- (BOOL)__useNewMicrophoneText;
- (double)toolButtonStackElementSpacing;
- (id)toolButtonInfoWithType:(long long)a0 enterType:(long long)a1;
- (id)leftToolButtonInitialTypesWithSession:(id)a0;
- (id)rightToolButtonInitialTypesWithCaller:(BOOL)a0 callType:(long long)a1 rtvtype:(long long)a2;
- (id)actionButtonInitialTypesWithVoipSession:(id)a0;
- (void).cxx_destruct;

@end
