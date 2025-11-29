@class TTAVWindowClient, UIView;
@protocol AVViewBackgroundProtocol;

@interface TTPlayerView2 : UIView {
    UIView<AVViewBackgroundProtocol> *_view;
    TTAVWindowClient *_client;
    long long _mirrorType;
    long long _rotateType;
    long long _renderType;
    float _scale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _clipRect;
    int _videoWidth;
    int _videoHeight;
}

@property (nonatomic) double alignRatio;
@property (nonatomic) long long alignMode;
@property (nonatomic) long long scaleType;
@property (nonatomic, getter=isSupportPictureInPictureMode) BOOL supportPictureInPictureMode;

+ (id)makeNew:(id /* block */)a0 renderType:(long long)a1;
+ (id)makeNew:(id /* block */)a0;

- (void)updateVideoFrame;
- (void)createNewWindow:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledRectFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoRatio:(double)a1 scaleType:(long long)a2;
- (void)updateForAlignMode:(long long)a0;
- (void)setWindowUsage:(long long)a0;
- (void)setRotationOrMirror:(long long)a0 mirror:(long long)a1;
- (void)checkPictureInPictureMode;
- (BOOL)internalPlayerShouldStillKeepRunningGPUWhenInBackground;
- (void)configInternalPlayerShouldStillKeepRunningGPUWhenInBackgroundWithValue:(BOOL)a0;
- (void)activateAVView;
- (void)dispatchVideoInfo:(int)a0 parameter:(int)a1;
- (int)getScaleType;
- (id)getOsView;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)applicationDidBecomeActive:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapshot;
- (void)applicationDidEnterBackground:(id)a0;
- (void)setClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;

@end
