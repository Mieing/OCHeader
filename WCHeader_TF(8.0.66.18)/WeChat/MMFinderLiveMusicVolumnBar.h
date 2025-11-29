@class MMFinderLiveMusicVolumnContentView;

@interface MMFinderLiveMusicVolumnBar : UIView

@property (retain, nonatomic) MMFinderLiveMusicVolumnContentView *contentView;
@property (nonatomic) BOOL showing;
@property (copy, nonatomic) id /* block */ volumnAdjustCallback;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)reduceVolumnToLowVoice;
- (void)recoverPreviousVolumn;
- (int)currentVolumn;
- (void)setVolumn:(int)a0;
- (void)updateUIWithVolumn:(int)a0;
- (void).cxx_destruct;

@end
