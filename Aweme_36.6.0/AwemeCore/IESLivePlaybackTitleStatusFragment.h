@class IESLivePlaybackTitleStatusModel, NSString, IESLivePlaybackTitleStatusView, IESLivePlaybackSubtitleStatusView;

@interface IESLivePlaybackTitleStatusFragment : IESLivePlaybackComponent <IESLivePlaybackSmallWindowAction, IESLiveMessageSubscriber>

@property (retain, nonatomic) IESLivePlaybackTitleStatusView *titleStatusView;
@property (retain, nonatomic) IESLivePlaybackSubtitleStatusView *subtitleStatusView;
@property (retain, nonatomic) IESLivePlaybackTitleStatusModel *titleStatusModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (BOOL)convergedModule;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (void)smallWindowDidChangeToFirstPlay;
- (void)updateTitleVisiable;
- (void)updateTitleVisiable:(BOOL)a0;
- (void).cxx_destruct;

@end
