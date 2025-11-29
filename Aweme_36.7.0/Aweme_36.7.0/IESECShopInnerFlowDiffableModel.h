@class NSString, NSMutableArray;

@interface IESECShopInnerFlowDiffableModel : NSObject <IGListDiffable>

@property (retain, nonatomic) NSString *sliceNavBarModel;
@property (retain, nonatomic) NSMutableArray *cardModels;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
