@class UIImageView, UILabel, UIButton;

@interface BDPNovelErrorView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (copy, nonatomic) id /* block */ action;

- (void)btnClicked;
- (void)showIcon:(id)a0 title:(id)a1 desc:(id)a2 btnText:(id)a3 fontColor:(id)a4;
- (void).cxx_destruct;

@end
