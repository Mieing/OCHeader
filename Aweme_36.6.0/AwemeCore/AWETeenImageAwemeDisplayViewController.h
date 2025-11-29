@class AWETeenExtraParamModel, NSString, UIImageView, AWEAwemeModel, UIView, NSNumber, AWETeenFeedPageContext;
@protocol IESVideoPlayerProtocol, AWETeenDisplayViewControllerDelegate;

@interface AWETeenImageAwemeDisplayViewController : UIViewController <AWETeenDisplayViewControllerProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL imageLoaded;
@property (nonatomic) double playStartTimestamp;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) NSString *currentItemID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWETeenDisplayViewControllerDelegate> interactionDelegate;
@property (nonatomic) long long vcType;
@property (copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) UIView *loadingView;
@property (retain, nonatomic) NSNumber *slideType;
@property (nonatomic) long long playType;
@property (readonly, nonatomic) BOOL isShowLoading;
@property (copy, nonatomic) id /* block */ didChangePlayBackAction;
@property (copy, nonatomic) id /* block */ initSeekEnd;
@property (copy, nonatomic) id /* block */ playComingToEnd;
@property (copy, nonatomic) id /* block */ willLoopPlaying;
@property (weak, nonatomic) AWETeenFeedPageContext *feedPageContext;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic) BOOL pauseBySingleClick;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (nonatomic) long long videoPlayState;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL isSeeking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)updatePlayerIfNeeded;
- (void)setPauseHidden:(BOOL)a0;
- (BOOL)alertIfNotValid;
- (void)p_updateImageIfNecessary;
- (void)p_trackVideoPlayAction;
- (void)p_trackPlayTime;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (BOOL)pause;
- (id)contentView;
- (BOOL)isPlaying;
- (BOOL)stop;
- (BOOL)pause:(BOOL)a0;
- (void)reset;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (BOOL)play:(BOOL)a0;
- (BOOL)isActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewFrame;

@end
