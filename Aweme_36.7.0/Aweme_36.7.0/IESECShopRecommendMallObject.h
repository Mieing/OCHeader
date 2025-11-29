@class NSString, IESECTracker, IESECShopRecommendMallResponse, IESECShopContext;

@interface IESECShopRecommendMallObject : NSObject <IGListDiffable>

@property (retain, nonatomic) IESECShopRecommendMallResponse *mallModel;
@property (weak, nonatomic) IESECShopContext *shopContext;
@property (weak, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSString *titleText;

+ (double)getItemWidth;
+ (double)getItemHeight;
+ (double)getBackViewEdge;
+ (double)getProductEdgeLeft;
+ (long long)maxProductCount;
+ (double)getProductEdgeRight;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;

@end
