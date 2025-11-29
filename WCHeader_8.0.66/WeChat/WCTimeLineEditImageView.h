@class WCTimeLineEditImageScrollView, EditImageMusicLyricsWidgetTool;

@interface WCTimeLineEditImageView : WCEditImageView

@property (retain, nonatomic) EditImageMusicLyricsWidgetTool *musicLyricsWidget;
@property (weak, nonatomic) WCTimeLineEditImageScrollView *_delegate;

- (void)setMusicLyricIsOn:(BOOL)a0;
- (BOOL)recoverLyricsWidget;
- (void)setMusicLyricWidgetAlpha:(double)a0;
- (void)updateMusicLyrics:(id)a0 totalTime:(double)a1;
- (void)updateMusicLyricsCropTime:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)seekMusicLyricsToRelativeTimeSec:(double)a0;
- (BOOL)checkWhetherEdited;
- (void)useImageTool:(int)a0;
- (BOOL)isTextToolType:(int)a0;
- (void).cxx_destruct;

@end
