@class NSArray, IESECTagsContainerView, UIImageView, UILabel;

@interface IESECGoodsServiceCouponView : UIView

@property (copy, nonatomic) NSArray *couponNameList;
@property (nonatomic) double contentSizeWidth;
@property (nonatomic) BOOL isHalfMode;
@property (nonatomic) BOOL shouldUseHalfCouponBGImage;
@property (retain, nonatomic) IESECTagsContainerView *tagStackContainerView;
@property (retain, nonatomic) UILabel *headlabel;
@property (retain, nonatomic) UIImageView *arrowIconImageView;
@property (nonatomic) BOOL isGoodsFeed;

- (void)p_setupCurrentCouponView;
- (void).cxx_destruct;

@end
