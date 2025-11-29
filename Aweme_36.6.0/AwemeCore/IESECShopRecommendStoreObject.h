@class NSArray, IESECShopContext, IESECTracker;

@interface IESECShopRecommendStoreObject : NSObject <IGListDiffable>

@property (retain, nonatomic) NSArray *shopList;
@property (weak, nonatomic) IESECShopContext *shopContext;
@property (weak, nonatomic) IESECTracker *tracker;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
