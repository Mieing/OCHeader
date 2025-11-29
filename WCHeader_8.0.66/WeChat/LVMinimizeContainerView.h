@class MMLoadingIndicatorView, LVMinimizeHintView, UIView, MMUIButton, UIButton;
@protocol LVMinimizeContainerViewDelegate;

@interface LVMinimizeContainerView : UIView

@property (retain, nonatomic) UIButton *contentView;
@property (retain, nonatomic) LVMinimizeHintView *hintView;
@property (retain, nonatomic) MMUIButton *playPauseButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) MMLoadingIndicatorView *loadingView;
@property (weak, nonatomic) id<LVMinimizeContainerViewDelegate> delegate;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct WCShowArea { double x_p; double y_p; double w_p; double h_p; } playerShowArea;

+ (BOOL)shouldAdjustShowArea:(id)a0;
+ (unsigned long long)styleForMediaInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForStyle:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })sizeForMediaInfo:(id)a0;

- (void)updateShowAreaForMediaInfo:(id)a0;
- (void)resizeWithMediaInfo:(id)a0;
- (unsigned long long)currentHintType;
- (void)updateHintType:(unsigned long long)a0;
- (BOOL)isShowingNextHint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createButton:(double)a0;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)playPauseClicked:(id)a0;
- (void)closeClicked:(id)a0;
- (void)contentClicked:(id)a0;
- (void)attachPlayerView:(id)a0;
- (id)detachPlayerView;
- (void).cxx_destruct;

@end
