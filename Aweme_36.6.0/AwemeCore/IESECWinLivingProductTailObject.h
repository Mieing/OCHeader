@class NSString;

@interface IESECWinLivingProductTailObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (nonatomic) long long surplusProductsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;

@end
