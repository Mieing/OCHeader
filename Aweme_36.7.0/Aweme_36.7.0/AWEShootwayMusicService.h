@class NSString;

@interface AWEShootwayMusicService : HTSService <AWEShootwayMusicServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEnableEffectShootwayMusicStatus;
- (BOOL)isEnableTemplateShootwayMusicStatus;
- (id)effectShootSelectMusicWithAweme:(id)a0;
- (id)templateSelectMusicWithAweme:(id)a0;
- (BOOL)hasAudioMicStatus:(id)a0;

@end
