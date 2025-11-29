@class NSString, UIImageView, NSURL, UIView, NSNumber, AWEAwemeModel;
@protocol AWELiveFeedAudioPreviewViewProtocol, AWELiveStreamPlayer, IESLivePlayerProtocol;

@interface AWEFeedNewNearbyWaterfallLiveStreamingView : UIView <IESLivePlayerControllerDelegate>

@property (retain, nonatomic) id<IESLivePlayerProtocol> playerController;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerControllerForPreview;
@property (retain, nonatomic) NSNumber *videoPreviewEnable;
@property (copy, nonatomic) NSString *currentStreamingPullURL;
@property (copy, nonatomic) NSString *currentStreamdataStr;
@property (copy, nonatomic) id /* block */ startLiveCompletion;
@property (retain, nonatomic) NSURL *waitedUrl;
@property (retain, nonatomic) UIView<AWELiveFeedAudioPreviewViewProtocol> *audioLiveAnimationView;
@property (retain, nonatomic) UIView *bigPartyGuestListView;
@property (retain, nonatomic) UIImageView *bigPartyBackground;
@property (nonatomic) BOOL isBigPartyGoingOn;
@property (nonatomic) double ratio;
@property (nonatomic) BOOL isAudioLive;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *anchorID;
@property (nonatomic) long long nearbyLinkmicDisplayType;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)updateWithRtmpURL:(id)a0 streamdata:(id)a1 isAudio:(BOOL)a2 roomID:(id)a3 anchorID:(id)a4 completion:(id /* block */)a5;
- (void)refreshPlayerView;
- (void)resetBigPartyView;
- (void)removeAudioAnimationView;
- (void)showAudioBackgroundWith:(id)a0 listModel:(id)a1 roomModel:(id)a2 awemeModel:(id)a3;
- (void)dealWithBigPartyWithMetaInfo:(id)a0;
- (void)loadBigPartyGuestViewWith:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bigPartyGuestListViewFrame;
- (void)updateWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setMuted:(BOOL)a0;
- (void)stop;
- (void)reset;
- (void)dealloc;
- (void)setup;

@end
