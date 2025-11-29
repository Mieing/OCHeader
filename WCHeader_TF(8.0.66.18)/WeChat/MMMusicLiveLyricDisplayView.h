@class NSString, MMMusicAutoscrollLabelView, WCListenLyricsLoadingHeaderView;
@protocol MMMusicLiveLyricDisplayViewDelegate;

@interface MMMusicLiveLyricDisplayView : UIView

@property (retain, nonatomic) MMMusicAutoscrollLabelView *currentLabel;
@property (retain, nonatomic) MMMusicAutoscrollLabelView *nextLabel;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSString *nextWaitingLyric;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) NSString *currentLyric;
@property (nonatomic) BOOL transitionAnimationDisabled;
@property (nonatomic) long long textAlignment;
@property (weak, nonatomic) id<MMMusicLiveLyricDisplayViewDelegate> delegate;
@property (nonatomic) BOOL isOpenShadow;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WCListenLyricsLoadingHeaderView *lyricLoadingView;

- (id)initWithScene:(unsigned long long)a0;
- (void)setupSubviews;
- (void)setupLyricLoadingView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLyricFont:(id)a0;
- (void)setLyricColor:(id)a0;
- (void)setLyricNumberOfLines:(int)a0;
- (void)sizeToFit;
- (void)internalSizeToFit:(BOOL)a0;
- (void)updateLyricsPosition;
- (void)scrollToNextLyric:(id)a0;
- (void)tryDisplayNextLyric;
- (id)currentLyric;
- (void)setCurrentLyric:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
