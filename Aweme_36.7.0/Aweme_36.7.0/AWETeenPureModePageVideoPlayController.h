@class AWETeenRoundRectangleButton, NSArray, NSString, AWETeenRoundRectangleBoxView;

@interface AWETeenPureModePageVideoPlayController : AWEBaseController <AWETeenPureModePageControllerProtocol, AWETeenSpeedPlayMessage>

@property (retain, nonatomic) AWETeenRoundRectangleBoxView *boxView;
@property (retain, nonatomic) AWETeenRoundRectangleButton *playButton;
@property (retain, nonatomic) AWETeenRoundRectangleButton *speedButton;
@property (retain, nonatomic) NSArray *speedNumArray;
@property (nonatomic) unsigned long long currentSpeedIdx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdatePlayerController:(id)a0;
- (void)portraitUpdatePlaybackRate:(id)a0;
- (void)updatePlayButtonIcon;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)playButtonClicked:(id)a0;

@end
