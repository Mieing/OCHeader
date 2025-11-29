@class UIImageView, UILabel, UIView, UIButton;

@interface CJPayTextArrowView : UIView

@property (retain, nonatomic) UIButton *clickButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) double arrowSpace;
@property (nonatomic) double arrowSize;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (id)cj_performanceMonitorName;
- (void)updateText:(id)a0 imageName:(id)a1;
- (void)p_clickView:(id)a0;
- (void)p_updateArrowImageViewSize;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
