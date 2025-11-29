@class UIButton;

@interface AWEPlayDanmakuInputContainView : UIView

@property (retain, nonatomic) UIButton *danmakuInputButton;
@property (retain, nonatomic) UIButton *inputGuideButton;
@property (nonatomic) BOOL isShowGuideButton;
@property (copy, nonatomic) id /* block */ inputClickBlock;
@property (nonatomic) BOOL guideFromColdLaunch;

- (void)setAlpha:(double)a0;
- (void)layoutSubviews;
- (void)configSubViews;
- (double)inputBtnWH;
- (double)inputBtnLeftMargin;
- (double)guideBtnLeftMargin;
- (void)handleInputButtonClick;
- (double)fontSizeOfInputGuideBtn;
- (void)handleInputGuideButtonClick;
- (double)defaultContainerWH;
- (double)containerWHWithGuideBtnShow;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
