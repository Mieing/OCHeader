@class AWEAwemeModel, NSString, AWEGeneralSearchModel, UIImageView, AWEGradientView, NSDictionary, AWESearchLiveStatusRichView, YYLabel, AWEOriginalAdModel, UIButton, UIViewController;
@protocol AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol, AWELiveStreamPlayer;

@interface AWESearchActivityHorizontalAutoPlayCellController : UIViewController <IESLivePlayerControllerDelegate, AWESearchHorizontalAutoPlayCellProtocol>

@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) YYLabel *hostNameLabel;
@property (retain, nonatomic) AWESearchLiveStatusRichView *liveSearchStatusView;
@property (retain, nonatomic) AWEGradientView *gradientMaskView;
@property (nonatomic) BOOL active;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) double startLoadingTime;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double searchHorizontalAutoPlayCellWidth;
@property (nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (readonly, nonatomic) BOOL isResourceRecalled;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (copy, nonatomic) id /* block */ playerWillStartNextLoop;

+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)updateLiveListOfVideoFeedWithData:(id)a0 withReferString:(id)a1;
- (id)livePlayerView;
- (void)resetLivePlayer;
- (void)trackLiveWindowDurationWithItem:(id)a0 startPlayTime:(double)a1;
- (void)trackLiveWindowShowWithItem:(id)a0;
- (void)_stopPlayer;
- (void)trackLiveWindowPlayedDurationWithItem:(id)a0 startLoadingTime:(double)a1;
- (void)_startPlayLiveWithStreamData:(id)a0 orStreamURL:(id)a1;
- (void)_checkRoomEndStatus;
- (void)_updateCoverImageWithAweme:(id)a0;
- (void)trackSearchResultShowWithItem:(id)a0;
- (void)trackLiveClick;
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
