@class IESECLiveStackContainerView, UIStackView, UIImageView, IESECLiveGoodsListAuthorReputationModel, UILabel, IESECLiveContext;

@interface IESECLiveReputationView : UIView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *levelLabel;
@property (retain, nonatomic) UIImageView *detailArrowImageView;
@property (retain, nonatomic) IESECLiveStackContainerView *reputationInfoStackView;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) IESECLiveGoodsListAuthorReputationModel *reputationModel;
@property (retain, nonatomic) IESECLiveContext *liveContext;

- (void)tapOnReputation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetUI;

@end
