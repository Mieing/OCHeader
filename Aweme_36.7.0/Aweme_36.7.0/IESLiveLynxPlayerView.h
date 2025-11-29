@class UIImageView, NSString;
@protocol IESLiveLynxPlayerDelegate, IESLivePlayerProtocol;

@interface IESLiveLynxPlayerView : UIView <IESLivePlayerControllerDelegate>

@property (retain, nonatomic) id<IESLivePlayerProtocol> innerPlayer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) unsigned long long currentPlayState;
@property (weak, nonatomic) id<IESLiveLynxPlayerDelegate> delegate;
@property (nonatomic) BOOL respondsSEI;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) double volume;
@property (nonatomic) double startTime;
@property (nonatomic) double playTime;
@property (nonatomic) BOOL enableBGPlay;
@property (copy, nonatomic) NSString *posterURL;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) double rate;
@property (copy, nonatomic) NSString *fitMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)__configFitMode;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)playerFrozen:(id)a0;
- (void)playerResume:(id)a0;
- (void)updateVideoQuality:(id)a0;
- (void)configCoverHidden:(BOOL)a0;
- (void)__configPoster:(id)a0;
- (void)reloadWithStreamData:(id)a0 defaultSDKKey:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;

@end
