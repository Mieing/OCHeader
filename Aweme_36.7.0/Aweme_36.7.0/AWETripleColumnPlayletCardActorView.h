@class AWECodeGenSeriesPlayerModel, UILabel, UIView, BDImageView;

@interface AWETripleColumnPlayletCardActorView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) BDImageView *arrowImageView;
@property (retain, nonatomic) AWECodeGenSeriesPlayerModel *playerModel;
@property (copy, nonatomic) id /* block */ clickAction;

- (void)configWithPlayerModel:(id)a0;
- (void)tapGestureAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
