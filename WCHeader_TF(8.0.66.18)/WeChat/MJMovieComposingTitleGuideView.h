@class UILabel, UITapGestureRecognizer, MMUIButton;
@protocol MJMovieComposingTitleGuideViewDelegate;

@interface MJMovieComposingTitleGuideView : MMUIView

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGR;
@property (weak, nonatomic) id<MJMovieComposingTitleGuideViewDelegate> delegate;
@property (nonatomic) BOOL hasBeenTouched;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutViews;
- (void)updateLayoutToNoraml;
- (void)updateLayoutToShirnked;
- (void)closeButtonTouchUpInside:(id)a0;
- (void)tapGRAction:(id)a0;
- (void).cxx_destruct;

@end
