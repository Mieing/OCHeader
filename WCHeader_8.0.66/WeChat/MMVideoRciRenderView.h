@class MMCameraFocusSquare, UIPinchGestureRecognizer, XImageViewRenderer, UITapGestureRecognizer;
@protocol MMVideoRenderViewDelegate;

@interface MMVideoRciRenderView : UIView {
    BOOL _isInBackground;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    unsigned long long _busyCount;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMCameraFocusSquare *_focusSquare;
    unsigned int _originYuvYTexture;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoRect;
@property (retain, nonatomic) XImageViewRenderer *renderer;
@property (nonatomic) int mRawDataFrameType;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) float rotationInDegree;
@property (weak, nonatomic) id<MMVideoRenderViewDelegate> delegate;
@property (nonatomic) BOOL mirror;
@property (nonatomic) BOOL renderable;
@property (nonatomic) BOOL focusable;
@property (nonatomic) BOOL disableOpaqueRender;
@property (nonatomic) int videoBlockThreshold;
@property (nonatomic) int streamType;
@property (nonatomic) int blockIntervalMs;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bufSize;
@property (readonly, nonatomic) unsigned long long lastBlockDuration;
@property (nonatomic) BOOL enableGestures;
@property (nonatomic) BOOL isInRotationAnimation;
@property (copy, nonatomic) id /* block */ onRenderEvent;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setup;
- (void)dealloc;
- (void)cleanup;
- (void)setupLayer;
- (void)renderWeEffectFrame:(id)a0;
- (void)renderTexture:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)handlePinch:(id)a0;
- (void)initFocusView;
- (void)deallocFocusView;
- (void)focusTap:(id)a0;
- (void)focusAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
