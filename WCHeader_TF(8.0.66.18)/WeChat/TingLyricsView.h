@class NSString, MMMusicLyricResolver, MMMusicLiveLyricDisplayView;

@interface TingLyricsView : MMUIButton

@property (copy, nonatomic) NSString *lyricsId;
@property (retain, nonatomic) MMMusicLyricResolver *resolver;
@property (retain, nonatomic) MMMusicLiveLyricDisplayView *lyricsDisplayView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTextAlignment:(long long)a0;
- (void)setLyricFont:(id)a0;
- (void)setLyricColor:(id)a0;
- (void)setLyricNumberOfLines:(int)a0;
- (void)setIsSeeking:(BOOL)a0;
- (void)updateLyricsId:(id)a0;
- (void)updateLyricsWithCurrentTime:(double)a0 animated:(BOOL)a1;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 updateCurrentTime:(double)a2 displayTime:(double)a3 duration:(double)a4;
- (void)updateWithCurrentTime:(double)a0 animated:(BOOL)a1;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
