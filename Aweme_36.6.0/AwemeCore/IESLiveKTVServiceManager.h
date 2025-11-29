@class IESLiveKTVResourceManager, IESLiveKTVPlayerServiceImpl, IESLiveKTVLyricServiceImpl, IESLiveKTVMidiServiceImpl, IESLiveKTVTuningServiceImpl, NSString, IESLiveKTVSendEventServiceImpl, IESLiveKTVMusicListServiceImpl, IESLiveComponentContext;

@interface IESLiveKTVServiceManager : NSObject <IESLiveKTVService>

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveKTVPlayerServiceImpl *player;
@property (retain, nonatomic) IESLiveKTVTuningServiceImpl *tuningService;
@property (retain, nonatomic) IESLiveKTVResourceManager *downloader;
@property (retain, nonatomic) IESLiveKTVMusicListServiceImpl *musicListManager;
@property (retain, nonatomic) IESLiveKTVMidiServiceImpl *midiService;
@property (retain, nonatomic) IESLiveKTVLyricServiceImpl *lyricService;
@property (retain, nonatomic) IESLiveKTVSendEventServiceImpl *sendEventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setMusicManagerDelegate:(id)a0;
- (void).cxx_destruct;

@end
