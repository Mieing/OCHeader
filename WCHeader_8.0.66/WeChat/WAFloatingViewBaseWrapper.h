@class NSString, UIImageView, WAWebViewController, UIView;

@interface WAFloatingViewBaseWrapper : NSObject

@property (retain, nonatomic) UIImageView *videoSnapShotView;
@property (nonatomic) long long type;
@property (nonatomic) BOOL showProgressBar;
@property (nonatomic) BOOL needAddToOriginParentView;
@property (retain, nonatomic) NSString *videoURL;
@property (weak, nonatomic) id videoDelegate;
@property (weak, nonatomic) id originVideoDelegate;
@property (nonatomic) unsigned int playerId;
@property (weak, nonatomic) WAWebViewController *webview;
@property (weak, nonatomic) UIView *videoOriginalParentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoOriginalFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoOriginParentViewInWindowFrame;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) double startTime;
@property (nonatomic) struct CGPoint { double x; double y; } floatVideoInitialPosition;

- (void)setPlayerId:(unsigned int)a0 webview:(id)a1;
- (BOOL)parseFromDic:(id)a0;
- (void)updateFromDic:(id)a0;
- (void)setParams;
- (void)resetParams;
- (void)pause;
- (void)play;
- (void)stop;
- (id)playerView;
- (BOOL)canFloat;
- (BOOL)isLoading;
- (id)getCurrentSnapShotImage;
- (void)addToVideoView:(id)a0;
- (void).cxx_destruct;

@end
