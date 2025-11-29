@class NSString, IESLiveVideoGiftResourceModel, UITapGestureRecognizer, IESLiveMetalRenderer, IESLiveAssetReaderOutput, NSObject, MTKView, IESLiveFrameInfo, IESLiveVideoGiftMetalConfiguration;
@protocol OS_dispatch_queue;

@interface IESLiveVideoGiftMetalView : UIView <UIGestureRecognizerDelegate>

@property BOOL enableRender;
@property BOOL hasDestroyed;
@property BOOL hasSetupGL;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (retain, nonatomic) IESLiveMetalRenderer *metalRenderer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncMetalRenderQueue;
@property (retain, nonatomic) IESLiveAssetReaderOutput *output;
@property (retain, nonatomic) IESLiveVideoGiftResourceModel *resourceModel;
@property (copy, nonatomic) id /* block */ process;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) IESLiveFrameInfo *currentFrame;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) MTKView *mtkView;
@property unsigned long long renderContentMode;
@property (copy, nonatomic) id /* block */ framePlayDurationCallBack;
@property (copy, nonatomic) id /* block */ frameCallBackBeforePlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterPlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterCmdBufCommit;
@property (copy, nonatomic) id /* block */ adapterRenderViewWhenFrameDidChange;
@property (copy, nonatomic) id /* block */ receiveTouchCallBack;
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic, getter=isUsingDrawTimer) BOOL useDrawTimer;
@property (nonatomic) BOOL enableVideoSR;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *configuration;
@property (nonatomic) void /* unknown type, empty encoding */ renderPositionMultiFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } realDisplayFrameOnScreen;
@property (nonatomic) BOOL enableTouchOnMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)totalDurationOfPlayingEffect;
- (void)renderOutput:(id)a0 resourceModel:(id)a1 process:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)maskHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)hitMasksWithHitPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)rectContains:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)handleTouchOnMasks:(id)a0;
- (void)bindTapGesture;
- (void)removeTapGesture;
- (void)_configMTKViewDrawableSizeIfNeeded:(id)a0 withVideoSize:(struct CGSize { double x0; double x1; })a1;
- (void)createAsyncMetalRenderQueueIfNotExisted;
- (BOOL)_isRealDisplayFrameOnScreenLargerThanSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)pause;
- (void)destroy;
- (double)currentTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)seekToTime:(double)a0;
- (void)resume;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleTap:(id)a0;
- (void)setupMetal;

@end
