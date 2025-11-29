@class NSArray, NSDictionary, NSString, IESECCommentComponents, NSNumber;

@interface IESECGoodsCommentsListBFFResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *totalCount;
@property (copy, nonatomic) NSArray *commentList;
@property (retain, nonatomic) IESECCommentComponents *components;
@property (copy, nonatomic) NSDictionary *global;
@property (retain, nonatomic) NSArray *skuModelArray;
@property (copy, nonatomic) NSString *productName;

+ (id)commentListJSONTransformer;
+ (id)skuModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
