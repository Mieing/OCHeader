@class AWESearchBottomNormalBarComponentModel, UIImageView, UILabel, UIView, UIButton;

@interface AWESearchBottomNormalBarComponentView : UIView

@property (retain, nonatomic) UIImageView *preIconImage;
@property (retain, nonatomic) UILabel *preTextLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIButton *clickButton;
@property (retain, nonatomic) AWESearchBottomNormalBarComponentModel *model;
@property (copy, nonatomic) id /* block */ tapNormalBarBlock;

- (void)configDataWithModel:(id)a0;
- (void)clickButtonAction;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
