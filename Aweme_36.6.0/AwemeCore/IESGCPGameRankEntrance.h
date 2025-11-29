@class UIImageView, IESGCPPBRankListAdditionalModel, UILabel;

@interface IESGCPGameRankEntrance : UIView

@property (retain, nonatomic) IESGCPPBRankListAdditionalModel *rankModel;
@property (retain, nonatomic) UIImageView *rankBgImage;
@property (retain, nonatomic) UILabel *rankingLabel;
@property (retain, nonatomic) UILabel *rankNameLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;

- (void)setImageWithImageView:(id)a0 url:(id)a1 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)updateWithRankModel:(id)a0;
- (void)setupClickHandle;
- (void)handleRankEntranceClick;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateModel:(id)a0;

@end
