@class UITextView, UIImageView, WCStoryLyricWaveView, NSMutableArray;

@interface EditImageMusicLyricsWidgetTool : EditImageWidgetTool

@property (nonatomic) struct CGPoint { double x; double y; } initialOrigin;
@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) WCStoryLyricWaveView *waveView;
@property (retain, nonatomic) NSMutableArray *lyrics;
@property (retain, nonatomic) UITextView *snapShotTextView;
@property (nonatomic, getter=isDragToDelete) BOOL dragToDelete;
@property (copy, nonatomic) id /* block */ didDeletedBlock;
@property (copy, nonatomic) id /* block */ didDoubleTapBlock;
@property (nonatomic) double lyricTotalTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } videoCropTimeRange;

+ (id)generateWidgetFromState:(id)a0;

- (void)setup;
- (void)updateMusicLyricsCropTime:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)updateMusicLyrics:(id)a0 totalTime:(double)a1;
- (id)splitLyrics:(id)a0;
- (id)genLyricAnimationForScene:(unsigned long long)a0;
- (id)genLyricImageWithLyric:(id)a0;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)handlePinchGesture:(id)a0;
- (void)onWidgitDeleted;
- (void)freezeWidget;
- (void)reviveWidget;
- (void)seekWidgetToTimeSec:(double)a0;
- (void)resetWidget;
- (void)_freezeAtPlayingTime:(double)a0;
- (id)exportWidgetStateForEditorFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 assetPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)resetToInitialState;
- (id)exportAnimatedLayer;
- (void).cxx_destruct;

@end
