@class IESLiveAssetReaderOutput, IESLiveVideoGiftResourceInfo, IESLiveMultiVideoMetalRenderer, IESLiveVideoGiftMetalConfiguration, MTKView;

@interface IESLiveMultiVideoGiftMetalView : UIView

@property BOOL enableRender;
@property BOOL hasDestroyed;
@property BOOL hasSetupGL;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (retain, nonatomic) IESLiveMultiVideoMetalRenderer *metalRenderer;
@property (retain, nonatomic) IESLiveAssetReaderOutput *output;
@property (copy, nonatomic) id /* block */ process;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IESLiveVideoGiftResourceInfo *model;
@property (retain, nonatomic) MTKView *mtkView;
@property unsigned long long renderContentMode;
@property (copy, nonatomic) id /* block */ framePlayDurationCallBack;
@property (copy, nonatomic) id /* block */ frameCallBackBeforePlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterPlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterCmdBufCommit;
@property (copy, nonatomic) id /* block */ viewDidLoadBlock;
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic, getter=isUsingDrawTimer) BOOL useDrawTimer;
@property (nonatomic) BOOL enableVideoSR;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *configuration;

- (double)totalDurationOfPlayingEffect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mtkViewFrame;
- (void)renderOutput:(id)a0 resourceModel:(id)a1 process:(id /* block */)a2 completion:(id /* block */)a3;
- (void)renderMTKView;
- (void).cxx_destruct;
- (void)destroy;
- (double)currentTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)seekToTime:(double)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupMetal;

@end
