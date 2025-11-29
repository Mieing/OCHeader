@class IESECRelationGoodsCardViewModel, NSDictionary, NSNumber;

@interface IESECWinLivingProductObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESECRelationGoodsCardViewModel *product;
@property (nonatomic) long long rank;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) long long itemIndex;
@property (copy, nonatomic) NSDictionary *uiLogExtra;
@property (retain, nonatomic) NSNumber *hotSalesWidth;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;

@end
