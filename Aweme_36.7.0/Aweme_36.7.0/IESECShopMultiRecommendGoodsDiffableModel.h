@class NSString, NSMutableArray;

@interface IESECShopMultiRecommendGoodsDiffableModel : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (retain, nonatomic) NSMutableArray *goods;
@property (nonatomic) long long followStatus;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
