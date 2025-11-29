@class AWEAwemeModel, NSString, AWEGradientView, NSDictionary, AWEOriginalAdModel, AWESearchLiveStatusRichView, UIButton, UIViewController, AWESearchLivePayOverlayView;
@protocol AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol, AWELiveStreamPlayer;

@interface AWESearchLiveAutoPlayViewController : UIViewController <AWESearchHorizontalAutoPlayCellProtocol, IESLivePlayerControllerDelegate, AWELivePaidLivePlayerDelegate>

@property (nonatomic) BOOL active;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) double startLoadingTime;
@property (nonatomic) long long payStatus;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEGradientView *gradientMaskView;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long index;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (retain, nonatomic) AWESearchLiveStatusRichView *liveSearchStatusView;
@property (retain, nonatomic) AWESearchLivePayOverlayView *payOverlayView;
@property (nonatomic) double searchHorizontalAutoPlayCellWidth;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (readonly, nonatomic) BOOL isResourceRecalled;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (copy, nonatomic) id /* block */ playerWillStartNextLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (id)livePlayerView;
- (void)resetLivePlayer;
- (void)trialTimeDidChange:(double)a0;
- (void)viewStatusDidChange:(long long)a0 hasShareTickets:(BOOL)a1;
- (void)trackLiveWindowShowWithItem:(id)a0;
- (void)updateCoverImageWithAweme:(id)a0;
- (void)_stopPlayer;
- (void)willEnterRoom;
- (void)checkRoomEndStatus;
- (void)setupSubViews;
- (void)_startPlayLiveWithStreamData:(id)a0 orStreamURL:(id)a1;
- (void)setupPaySubViews;
- (void)trackLiveWindowDurationWithItem:(id)a0;
- (void)trackLiveClick:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)reset;
- (void)didResignActive;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)isActive;
- (void)updateModel:(id)a0;
- (id)livePlayer;

@end
