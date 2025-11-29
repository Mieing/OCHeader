@class AWEAwemeModel, IESLiveGradientView, UITapGestureRecognizer, IESLivePrivacyPolicyToken, NSString, UIImageView, NSDictionary, UIViewController, IESLiveImageView, UILabel;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol;

@interface AWELiveCommentVideoPlayViewController : UIViewController <AWEPlayVideoDelegate, UIGestureRecognizerDelegate, IESLivePrivacyContextProvider, IESLiveCommentVideoShareVideoViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol> *playVideoViewController;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) BOOL isPlayingBeforeEnterBackground;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (nonatomic) double videoPlayTime;
@property (nonatomic) BOOL isFirstPlayLoop;
@property (retain, nonatomic) IESLiveGradientView *bottomMaskView;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLiveImageView *pauseIcon;
@property (retain, nonatomic) UILabel *zanLabel;
@property (retain, nonatomic) IESLiveImageView *zanIcon;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (retain, nonatomic) IESLivePrivacyPolicyToken *privacyToken;
@property (copy, nonatomic) id /* block */ didClickVideoCallback;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pauseBySingleClick;
- (void)playerWillStartNextLoop:(id)a0;
- (void)didSetAttachingDIContext;
- (void)initVideoController;
- (BOOL)needAudioWrapper;
- (void)appDidActive;
- (void)appEnterBack;
- (void)resetVideoPlayerViewController;
- (void)setupDetailStyleUI;
- (void)setupSearchStyleUI;
- (void)trackVideoDuration;
- (BOOL)isVideoPlayerVisble;
- (BOOL)isSelfGuest;
- (BOOL)isSelfAnchor;
- (id)providePrivacyContextForKey:(id)a0;
- (id)initWithDIContext:(id)a0 awemeModel:(id)a1 trackParams:(id)a2;
- (void)setupVolume;
- (unsigned long long)getReportTypeWithAweme:(id)a0;
- (BOOL)isMyAwemeModel;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)pause;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)play:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)handleSingleTap;
- (void)willDisplay;
- (void)resetVolume;

@end
