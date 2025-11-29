@class CSJPlayableVideoTipsView, UILabel, UIActivityIndicatorView, NSString, UIView, CSJPlayableVideoView, CSJMaterialMeta;

@interface CSJPlayableVideoController : NSObject <BUVideoPlayerDelegate, BUVideoPlayerTimeDelegate>

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJPlayableVideoView *videoView;
@property (nonatomic) BOOL storeKitOpen;
@property (nonatomic) BOOL hidden;
@property (weak, nonatomic) UIView *superView;
@property (nonatomic) BOOL isShowed;
@property (nonatomic) BOOL isValidVideo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (retain, nonatomic) CSJPlayableVideoTipsView *tipsView;
@property (retain, nonatomic) UILabel *errorTipsLabel;
@property (copy, nonatomic) NSString *orignalCategory;
@property (nonatomic) double currentVideoPlayTime;
@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerReadyToPlay:(id)a0;
- (void)storeKitWillOpen:(id)a0;
- (void)storeKitDidClose:(id)a0;
- (void)playerReadyToPlayWhenApplicationEnterBackground:(id)a0;
- (void)player:(id)a0 stateDidChanged:(long long)a1;
- (void)playerDidPlayFinish:(id)a0 error:(id)a1;
- (void)player:(id)a0 decodeModeChanged:(unsigned long long)a1;
- (void)moveAction:(id)a0;
- (long long)edgeTo:(struct CGPoint { double x0; double x1; })a0;
- (void)applicationDidEnterForeGround;
- (void)applicationDidEnterBackGround;
- (void)addNotification;
- (void)player:(id)a0 second:(double)a1;
- (void).cxx_destruct;
- (void)hide;
- (void)reset;
- (void)dealloc;
- (void)showInView:(id)a0;
- (void)setupPlayer;
- (id)initWithMaterial:(id)a0;

@end
