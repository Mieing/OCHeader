@class NSString, HTSLiveRoom;

@interface IESLivePlaybackVideoReplaceFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackChangeStreamAction>

@property (retain, nonatomic) HTSLiveRoom *room;
@property (weak, nonatomic) id reminderAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)p_showAlert;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (void).cxx_destruct;

@end
