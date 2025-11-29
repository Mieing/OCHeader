@class IESECLivePublicScreenGoodsCardModel, IESECLiveContext, UIImageView, UILabel, UIView;

@interface IESECLivePublicScreenGoodsCardView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *leftContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleIconView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) IESECLivePublicScreenGoodsCardModel *model;
@property (retain, nonatomic) IESECLiveContext *liveContext;

+ (id)cardViewWithModel:(id)a0 liveContext:(id)a1;

- (id)jumpHandler;
- (void)onClick:(id)a0;
- (id)tracker;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
