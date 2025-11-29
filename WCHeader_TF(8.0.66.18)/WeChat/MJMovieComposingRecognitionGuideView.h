@class MMUIButton, MMUILabel, MJGradientView;
@protocol MJMovieComposingRecognitionGuideViewDelegate;

@interface MJMovieComposingRecognitionGuideView : MMUIView

@property (retain, nonatomic) MJGradientView *backgroundGradientView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (weak, nonatomic) id<MJMovieComposingRecognitionGuideViewDelegate> delegate;
@property (nonatomic) unsigned long long guideScene;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutViews;
- (void)setRecognitionGuideViewTextsWithGuideScene:(unsigned long long)a0;
- (void)confirmButtonDidTouchUpInside:(id)a0;
- (void)cancelButtonDidTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
