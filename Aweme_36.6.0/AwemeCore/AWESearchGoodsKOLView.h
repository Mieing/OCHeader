@class UIImageView, AWESearchMerchandiseKOLInfo, UIView, UILabel;

@interface AWESearchGoodsKOLView : UIView

@property (retain, nonatomic) AWESearchMerchandiseKOLInfo *KOLInfo;
@property (retain, nonatomic) UIView *bg;
@property (retain, nonatomic) UIImageView *KOLAvatar;
@property (retain, nonatomic) UILabel *KOLName;
@property (retain, nonatomic) UIImageView *arrowIcon;

+ (double)height;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
