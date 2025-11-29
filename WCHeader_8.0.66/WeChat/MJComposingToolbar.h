@class UIStackView, NSArray, MJTimecodeView, MMUIButton;

@interface MJComposingToolbar : MMUIView

@property (retain, nonatomic) UIStackView *undoRedoContainer;
@property (retain, nonatomic) NSArray *contentSubviews;
@property (readonly, nonatomic) MJTimecodeView *timecodeLabel;
@property (readonly, nonatomic) MMUIButton *playButton;
@property (readonly, nonatomic) MMUIButton *undoButton;
@property (readonly, nonatomic) MMUIButton *redoButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)setIsEnabled:(BOOL)a0;
- (void)setIsPlaying:(BOOL)a0;
- (void)hideSubviews:(id)a0 animated:(BOOL)a1;
- (void)showSubviews:(id)a0 animated:(BOOL)a1;
- (void)showAll:(BOOL)a0;
- (void)hideAll:(BOOL)a0;
- (void).cxx_destruct;

@end
