@class UIButton, UIImageView, UILabel, UIView, AWEDoubleColumnSearchMerchandiseAladdinInfo;

@interface AWESearchAladdinWeakBannerCell : AWESearchCachalotECommerceBaseCell

@property (retain, nonatomic) UIView *functionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *iconPicture;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *arrowLabel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseAladdinInfo *aladdinInfoModel;
@property (retain, nonatomic) UIButton *enterButton;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
