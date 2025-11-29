@class AWENearbyCardPOIRecommendView, UIImageView, UIView, UILabel, YYLabel;

@interface AWENearbyCardPOIItemView : UIView

@property (retain, nonatomic) YYLabel *collectInfo;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *rightViewsContainer;
@property (retain, nonatomic) UIImageView *serviceIconView;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) YYLabel *typeLabel;
@property (retain, nonatomic) YYLabel *areaLabel;
@property (retain, nonatomic) YYLabel *priceLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) AWENearbyCardPOIRecommendView *recommendView;
@property (retain, nonatomic) YYLabel *discountLabel;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)__clickItem:(id)a0;
- (void)setupUIWithModel:(id)a0 contentWidth:(double)a1 cardModel:(id)a2;
- (void)initUIWithModel:(id)a0 contentWidth:(double)a1 cardModel:(id)a2;
- (void)v1UpdateStyleWithModel:(id)a0 contentWidth:(double)a1;
- (void)v2UpdateStyleWithModel:(id)a0 contentWidth:(double)a1;
- (void)v3UpdateStyleWithModel:(id)a0 contentWidth:(double)a1;
- (void)v4UpdateStyleWithModel:(id)a0 contentWidth:(double)a1;
- (double)poiLabelViewHeight;
- (double)tagViewHeight;
- (void)addCollectInfoLabelWithModel:(id)a0;
- (id)initWithPOIContentModel:(id)a0 contentWidth:(double)a1 cardModel:(id)a2;
- (void).cxx_destruct;

@end
