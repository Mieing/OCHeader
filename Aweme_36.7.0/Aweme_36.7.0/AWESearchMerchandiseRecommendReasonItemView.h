@class UIImageView, UILabel, AWEDoubleColumnSearchMerchandiseUserServiceInfoModel;

@interface AWESearchMerchandiseRecommendReasonItemView : UIView

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUserServiceInfoModel *model;

- (void)updateWithModel:(id)a0 maxWidth:(double)a1;
- (double)itemCalculatedWidthWithText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;

@end
