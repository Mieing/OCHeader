@class UIStackView, MMUIButton, MJPublisherPlaybackProgressSlider;
@protocol MJMovieComposingBottomBarReportDelegate;

@interface MJMovieComposingBottomBar : MMUIView

@property (retain, nonatomic) MJPublisherPlaybackProgressSlider *playbackProgressSlider;
@property (retain, nonatomic) UIStackView *panelButtonsContainer;
@property (retain, nonatomic) MMUIButton *musicButton;
@property (retain, nonatomic) MMUIButton *stickerButton;
@property (retain, nonatomic) MMUIButton *textButton;
@property (retain, nonatomic) MMUIButton *narrationButton;
@property (retain, nonatomic) MMUIButton *clippingButton;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (weak, nonatomic) id<MJMovieComposingBottomBarReportDelegate> delegate;
@property (copy, nonatomic) id /* block */ didClickButtonAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutViews;
- (void)buttonTouchUpInside:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)viewHitInSubview:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 event:(id)a2;
- (BOOL)shouldShowMusicEntryButton;
- (id)getReportDict;
- (void).cxx_destruct;

@end
