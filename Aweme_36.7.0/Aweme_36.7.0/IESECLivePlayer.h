@class NSString, UIImageView, NSArray, UIView, IESECLivePlayerBizStainedTrackInfo;
@protocol IESECLivePlayerViewDelegate, IESECUILoadingViewProtocol, IESLivePlayerProtocol;

@interface IESECLivePlayer : UIView <IESLivePlayerControllerDelegate, IESECLivePlayer>

@property (retain, nonatomic) id<IESLivePlayerProtocol> livePlayer;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *streamData;
@property (retain, nonatomic) UIImageView *liveCoverImageViewFront;
@property (retain, nonatomic) UIImageView *liveCoverImageViewBack;
@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *liveLoadingView;
@property (nonatomic) BOOL disableDynamicResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESECLivePlayerViewDelegate> delegate;
@property (nonatomic) BOOL muted;
@property (retain, nonatomic) NSArray *placeholderURLs;
@property (retain, nonatomic) IESECLivePlayerBizStainedTrackInfo *stainedTrackInfo;

+ (BOOL)livePlayerMute;

- (void)p_showLoading;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)enqueuePlayer;
- (void)getPlayerWithRoomID:(id)a0 streamData:(id)a1 dequeue:(BOOL)a2;
- (void)p_hideLoading;
- (void)getPlayerWithRoomID:(id)a0 streamData:(id)a1 dequeue:(BOOL)a2 streamOptions:(id)a3;
- (void)stainedLivePlayer:(id)a0;
- (id)defaultResolutionType;
- (id)p_newLiveCoverImageView;
- (void)asyncStop;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupViews;

@end
