@class UIImageView, UILabel, UIView, AWESearchMerchandiseShopInfo;

@interface AWESearchGoodsShopView : UIView

@property (nonatomic) BOOL needUnifiedUIConfig;
@property (retain, nonatomic) AWESearchMerchandiseShopInfo *shopInfo;
@property (retain, nonatomic) UIView *bg;
@property (retain, nonatomic) UILabel *shopTag;
@property (retain, nonatomic) UILabel *shopName;
@property (retain, nonatomic) UILabel *guideWord;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (nonatomic) BOOL fromPhotoSearch;
@property (retain, nonatomic) UIImageView *shopLeftIcon;

+ (double)shopHeightNeedUnifiedConfig:(BOOL)a0;

- (void)setShopInfo:(id)a0 needUnifiedUIConfig:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
