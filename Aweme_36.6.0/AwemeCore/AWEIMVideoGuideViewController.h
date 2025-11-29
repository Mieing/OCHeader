@class UIButton, AWEUILoadingView, NSString;
@protocol IESVideoPlayerProtocol;

@interface AWEIMVideoGuideViewController : UIViewController <IESVideoPlayerDelegate>

@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL hasPlay;
@property (copy, nonatomic) NSString *videoUrlString;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) id /* block */ jumpActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)__appDidBecomeActive:(id)a0;
- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)presentWithVideoID:(id)a0 videoURL:(id)a1 jumpActionBlock:(id /* block */)a2;
- (void)__invokeJumpOverAction:(id)a0;
- (void)invokeCloseAction:(id)a0;
- (void)__trackAction:(id)a0;
- (void)__appWillResingActive:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
