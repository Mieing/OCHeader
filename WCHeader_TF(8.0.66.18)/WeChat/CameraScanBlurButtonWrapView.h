@class UIButton, MMUILabel, UIView;

@interface CameraScanBlurButtonWrapView : UIView

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *middleView;
@property (retain, nonatomic) MMUILabel *introLbl;
@property (retain, nonatomic) UIButton *topButton;

- (id)init;
- (void)setupSubviews;
- (id)curIntroFont;
- (void)updateButtonIntroText:(id)a0;
- (void).cxx_destruct;

@end
