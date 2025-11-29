@class AWEAwemeModel, UIView, AWEGCPAwemeModel, NSString, NSDictionary, CAGradientLayer, NSObject, AWEGCPPlayerInteractionView;
@protocol AWELiveStreamPlayer, AWELiveRoomFinishedListenerProtocol;

@interface IESGCPLivePlayerView_Douyin : UIView <IESLivePlayerControllerDelegate, AWELivePaidLivePlayerDelegate, AWEGCPLivePlayerViewProtocol>

@property (retain, nonatomic) AWEGCPAwemeModel *gameAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isActiveBySingleClick;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) long long payStatus;
@property (retain, nonatomic) NSObject<AWELiveRoomFinishedListenerProtocol> *roomFinishListener;
@property (retain, nonatomic) UIView *liveTagView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) AWEGCPPlayerInteractionView *interactionView;
@property (nonatomic) BOOL mute;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ speakerButtonDidClicked;

+ (struct CGSize { double x0; double x1; })sizeWithSizeString:(id)a0;
+ (struct CGSize { double x0; double x1; })livePlayerSizeWithModel:(id)a0 maxWidth:(double)a1;

- (id)modernTransitionContext;
- (id)livePlayerView;
- (void)updateLogExtra:(id)a0;
- (void)updateAWEGCPAwemeModel:(id)a0;
- (struct CGSize { double x0; double x1; })getSizeWithAWEGCPAwemeModel:(id)a0 maxWidth:(double)a1;
- (void)updatePlayerCover;
- (void)_startPlayLiveWithSteamData:(id)a0 orStreamURL:(id)a1;
- (void)_stopPlayer;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setup;
- (id)livePlayer;

@end
