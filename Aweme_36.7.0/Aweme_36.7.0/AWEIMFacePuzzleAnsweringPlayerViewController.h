@class AWEIMFacePuzzleAnsweringProcessContext, AWEVideoPlayerController, BFTaskCompletionSource, NSString, AWEIMFacePuzzleAnsweringPlayerInfoUIState, AWEIMFacePuzzleAnsweringPlayerView, AWEIMUser, AWEIMFacePuzzleRecognizeSenseExerciseGetRequestModel;

@interface AWEIMFacePuzzleAnsweringPlayerViewController : UIViewController <AWEVideoPlayerControllerDelegate>

@property (retain, nonatomic) AWEIMFacePuzzleAnsweringPlayerView *infoView;
@property (retain, nonatomic) BFTaskCompletionSource *playTask;
@property (retain, nonatomic) BFTaskCompletionSource *readyToPlayTask;
@property (retain, nonatomic) AWEIMFacePuzzleRecognizeSenseExerciseGetRequestModel *questionInfoRequestModel;
@property (retain, nonatomic) AWEIMUser *secUser;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringPlayerInfoUIState *uiState;
@property (nonatomic) BOOL playError;
@property (nonatomic) BOOL isBackground;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessContext *answeringContext;
@property (nonatomic) double st;
@property (retain, nonatomic) AWEVideoPlayerController *playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)readyForDisplayForURL:(id)a0 metaFormat:(id)a1;
- (void)playbackDidFinishForURL:(id)a0;
- (void)playbackDidFailForURL:(id)a0 error:(id)a1;
- (void)p_addKVO;
- (void)p_initPlayer;
- (void)p_initUIState;
- (void)p_backAction;
- (id)initWithAnsweringContext:(id)a0;
- (void).cxx_destruct;
- (id)play;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (id)readyToPlay;

@end
