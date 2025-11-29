@class NSString, NSDictionary, IESECGoodsActivityIconTagButton, NSMutableDictionary, NSMutableArray;

@interface IESECShopGoodsTagsContainerOptView : UIView <IESECShopGoodsTagsContainerProtocol> {
    NSMutableDictionary *_showedTagsMapM;
}

@property (retain, nonatomic) IESECGoodsActivityIconTagButton *secKillBtn;
@property (retain, nonatomic) NSMutableArray *otherTags;
@property (nonatomic) long long visibleTags;
@property (readonly, copy, nonatomic) NSDictionary *showedTagsMap;
@property (nonatomic) unsigned long long totalTagsLimit;
@property (nonatomic) unsigned long long discountTagsLimit;
@property (nonatomic) double tagSpacing;
@property (nonatomic) BOOL newLineDashPattern;
@property (copy, nonatomic) id /* block */ clickFanCouponBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDiscountTags:(id)a0 isSecKill:(BOOL)a1 ritTags:(id)a2;
- (void)setDiscountTags:(id)a0 isSecKill:(BOOL)a1 ritTags:(id)a2 privilegeTags:(id)a3;
- (void)p_hideTagButtonIfNeeded;
- (void)p_setupTagButtonConstraints:(id)a0;
- (void)setPreviledgeTag:(id)a0 curIdx:(long long)a1;
- (void)setupDiscountTag:(id)a0 curIdx:(long long)a1;
- (void)setupRitTag:(id)a0 curIdx:(long long)a1;
- (void)p_updateTagButtonConstraints;
- (void)didTapFanCoupon;
- (void)preloadCreateTagsWithUpdate:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
