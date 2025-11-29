@interface IESECShopGoodsListFooterDiffableModel : NSObject <IGListDiffable>

@property (nonatomic, getter=isPromotionActive) BOOL promotionActive;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;

@end
