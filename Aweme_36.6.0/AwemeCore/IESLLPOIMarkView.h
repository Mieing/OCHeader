@class UIImageView, IESLLPOIMarkViewUIConfigModel, UILabel, UIView;

@interface IESLLPOIMarkView : IESLLAnimatedButton

@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *markImageView;
@property (retain, nonatomic) UILabel *markLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *verticalSeperateLine;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UIView *iconBkgView;
@property (copy, nonatomic) id /* block */ onClickedBlock;
@property (retain, nonatomic) IESLLPOIMarkViewUIConfigModel *uiConfigModel;

+ (id)markViewWithDefaultUIConfigModel;

- (id)initWithUIConfigModel:(id)a0;
- (void)setMarkImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMarkText:(id)a0;
- (void)setMarkImage:(id)a0;
- (void)setMarkImageURLs:(id)a0;
- (void)setMarkImageURLs:(id)a0 placeholder:(id)a1;
- (void)setMarkBackgroundImage:(id)a0;
- (void)setNeedIconDarkBkg:(BOOL)a0;
- (void)setLabelHeightWhenExpanded:(double)a0;
- (void)setLabelHeightWhenNotExpanded:(double)a0;
- (BOOL)shouldShowArrow;
- (void)onButtonClicked;
- (void)setMarkNumberOfLinesZero;
- (void)updateLeftMargin:(double)a0;
- (void)updateRightMargin:(double)a0;
- (void)setMarkTextColor:(id)a0;
- (void)setMarkDisableLocalization:(BOOL)a0;
- (void)setMarkTextFont:(id)a0;
- (void)setMarkTextAlpha:(double)a0;
- (void)setMarkBackgroundImageURLs:(id)a0;
- (void)setMarkBackgroundColor:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setupUI;

@end
