@class AWEAwemeModel, UIView, NSNumber, NSString, AWEDPlayerConfig, UIImageView, UIViewController, UILabel, AWEProfileCoverPreviewActionSheetManager;
@protocol AWEDPlayerProtocol, AWEDemaciaPlayerView;

@interface AWEProfileVideoPreviewViewController : UIViewController <AWEDemaciaPlayerViewDelegate, AWEDPlayerDelegate>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (nonatomic) unsigned long long previewType;
@property (retain, nonatomic) UIView<AWEDemaciaPlayerView> *playerView;
@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *generalPlayer;
@property (retain, nonatomic) AWEDPlayerConfig *generalPlayerConfig;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) AWEProfileCoverPreviewActionSheetManager *actionSheetManager;
@property (retain, nonatomic) UIView *backGuideView;
@property (retain, nonatomic) UILabel *backTextLabel;
@property (retain, nonatomic) UIImageView *backGuideIcon;
@property (nonatomic) BOOL mute;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ selectCoverCompletion;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ canPlay;
@property (copy, nonatomic) id /* block */ confirmDynamicCoverCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)customTimerPeriodic:(id)a0;
- (void)updateGeneralPlayerLayout;
- (id)bottomElementArray;
- (id)controllerBelowBaseUIArray;
- (id)elementConfigWithType:(unsigned long long)a0;
- (id)controllerConfigWithType:(unsigned long long)a0;
- (BOOL)useGeneralPlayer;
- (id)buildDPlayerConfig;
- (void)otherFullScreenHideBackGuideView;
- (void)otherFullScreenShowBackGuideView;
- (id)initWithAwemeModel:(id)a0 startTime:(id)a1 endTime:(id)a2 previewType:(unsigned long long)a3;
- (void)configWithAwemeModel:(id)a0 startTime:(id)a1 endTime:(id)a2 previewType:(unsigned long long)a3;
- (void)updateGeneralPlayer;
- (id)demaciaPlayerModelFromAweme:(id)a0;
- (void)windowDidBecomeVisible:(id)a0;
- (void)layoutMaskView;
- (void)setupAdditionalView;
- (void)setupPlayerView;
- (void)confirmSelectCover;
- (void)changeCoverAction;
- (BOOL)resignPlayWhenAppBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (long long)preferredStatusBarStyle;
- (void)addNotificationObservers;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)appDidBecomeActive:(id)a0;
- (void)setupUI;
- (void)dismissSelf;

@end
