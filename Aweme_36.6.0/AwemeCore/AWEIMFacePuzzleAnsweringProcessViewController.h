@class UIView, BFTask, AWEIMMessageComponentContext, AWEIMFacePuzzleAnsweringProcessViewModel, AWEIMFacePuzzleAnsweringProcessView, AWEIMFacePuzzleAnsweringPlayerViewController, AWEIMFacePuzzleAnsweringProcessContext, NSString, DUXLoadingToast, AWEIMFacePuzzleRecognizeSenseExerciseGetRequestModel, AVAudioPlayer, AWEIMFacePuzzleMessage;
@protocol AWEDemaciaPlayerView;

@interface AWEIMFacePuzzleAnsweringProcessViewController : UIViewController <AWEDemaciaPlayerViewDelegate, AWERouterViewControllerProtocol, AWEIMInAppPushProtocol>

@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessView *activityView;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessViewModel *answeringVm;
@property (retain, nonatomic) UIView<AWEDemaciaPlayerView> *playerView;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringPlayerViewController *playVC;
@property (retain, nonatomic) AWEIMFacePuzzleMessage *message;
@property (retain, nonatomic) BFTask *playTask;
@property (nonatomic) float st;
@property (retain, nonatomic) BFTask *questionInfoTask;
@property (retain, nonatomic) BFTask *decryptImageTask;
@property (retain, nonatomic) AWEIMMessageComponentContext *context;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isOutside;
@property (retain, nonatomic) AWEIMFacePuzzleRecognizeSenseExerciseGetRequestModel *questionRequestModel;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessContext *answeringContext;
@property (retain, nonatomic) UIView *loadingContainer;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) BFTask *contextPrepareTask;
@property (retain, nonatomic) AVAudioPlayer *startAudioPlayer;
@property (copy, nonatomic) NSString *startUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)canShowInnerPush;
- (void)p_backTapAction;
- (id)playCountdownAnimation;
- (void)errorHandle;
- (void)showBottomLineDialog:(id)a0;
- (void)showErrorDialog;
- (void)playStartAudio;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
