@class IESLiveDirectorVolumeView, NSDictionary, NSString;

@interface IESLiveDirectorVolumeFragment : IESLiveDirectorComponent <IESLiveDirectStatusEvent>

@property (retain, nonatomic) IESLiveDirectorVolumeView *volumeView;
@property (nonatomic) BOOL isMute;
@property (retain, nonatomic) NSDictionary *apmConfig;
@property (nonatomic) BOOL isAnchorRoomPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)updateMicrophoneState:(long long)a0;
- (void)directorStreamVolumeDidChange:(unsigned long long)a0;
- (void)directorRoomStatusDidChange:(BOOL)a0;
- (void)setupVolumeView;
- (double)volumeItemTopOffset;
- (void)handleVolume;
- (void).cxx_destruct;

@end
