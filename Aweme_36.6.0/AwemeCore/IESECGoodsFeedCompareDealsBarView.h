@class NSString, UIImageView, UILabel, UIView;

@interface IESECGoodsFeedCompareDealsBarView : UIView

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *goodsDescriptionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) UIView *goodsImageMaskView;
@property (copy, nonatomic) id /* block */ productClick;

- (void)initView;
- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addAction;
- (void)tapAction;

@end
