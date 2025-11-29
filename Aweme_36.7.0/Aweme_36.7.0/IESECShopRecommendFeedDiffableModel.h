@class NSString, NSMutableArray;

@interface IESECShopRecommendFeedDiffableModel : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSMutableArray *cards;
@property (retain, nonatomic) NSMutableArray *goods;
@property (nonatomic, getter=isShopProducts) BOOL shopProducts;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)mixCardModelWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
