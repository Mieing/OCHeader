@class UIImageView, UILabel, UIButton;

@interface BDPSubscribeNoficiationTipView : UIView

@property (retain, nonatomic) UIImageView *notiImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *pushImageView;
@property (retain, nonatomic) UIButton *ackButton;
@property (copy, nonatomic) id /* block */ ackBlock;

- (void)ackBtnDidClick;
- (void).cxx_destruct;
- (void)buildView;

@end
