@class NSString, AWESearchLiveStatusRichView, AWEAwemeModel;
@protocol AWELiveStreamPlayer;

@interface AWESearchLivePlayerView : UIView <IESLivePlayerControllerDelegate>

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double startPlayTime;
@property (nonatomic) double firstFrameTime;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (nonatomic) long long scaleType;
@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWESearchLiveStatusRichView *liveSearchStatusView;
@property (copy, nonatomic) id /* block */ startPlayCallback;
@property (copy, nonatomic) id /* block */ stopPlayCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (id)livePlayerView;
- (void)reloadWithAweme:(id)a0;
- (void)resetlivePlayer;
- (void)p_checkRoomEndStatus;
- (void)layoutCoverIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (id)livePlayer;

@end
