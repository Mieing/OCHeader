@class NSString, NSMutableDictionary;

@interface IESECPDPVideoAudioStateManager : NSObject <IESECPDPVideoAudioStateManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *sceneConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)configForScene:(id)a0;
- (void)changeConfigForPlayerInScene:(id)a0 mute:(BOOL)a1;
- (BOOL)canPlayerPlayAudioWhenTriggerPlaying:(id)a0;
- (id)calculateAudioSourceInList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
