@class NSString, NSDictionary, AWEAwemeModel, UILabel, AWEGradientView, UIViewController;
@protocol AWELiveStreamPlayer;

@interface AWEDiscoverDHotspotHorizontalLiveCellController : UIViewController <IESLivePlayerControllerDelegate, AWELivePaidLivePlayerDelegate, AWEDiscoverDHorizontalCellController>

@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (retain, nonatomic) UIViewController *videoContainerViewController;
@property (retain, nonatomic) UILabel *despLabel;
@property (weak, nonatomic) AWEGradientView *gradientView;
@property (nonatomic) double playStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) BOOL isResourceRecalled;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)trackShow;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)updateModel:(id)a0 playerHeight:(double)a1;
- (void)trackLiveShow;
- (void)trackLiveSdkDurationV2;
- (void)trackLivePlayIfNeeded;
- (void)startPlayLiveWithSteamData:(id)a0 orStreamURL:(id)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (void)reset;
- (void)didResignActive;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
