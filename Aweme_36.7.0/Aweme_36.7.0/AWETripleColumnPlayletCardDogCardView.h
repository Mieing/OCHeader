@class UIImageView, UILabel, UIView, AWECodeGenDogCardInfoModel;

@interface AWETripleColumnPlayletCardDogCardView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWECodeGenDogCardInfoModel *dogCardInfo;
@property (copy, nonatomic) id /* block */ clickAction;

- (void)tapGestureAction:(id)a0;
- (void)configWithDogCardInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
