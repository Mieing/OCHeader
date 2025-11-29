@class IESECGoodsDetailAuthorShopBindAuthorModel, NSArray, NSString, IESECPerfectCommentModel, NSNumber, IESECGoodsShopCommentModel;

@interface IESECGoodsCommentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *stats;
@property (copy, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSArray *impressionTags;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *praiseRate;
@property (retain, nonatomic) NSString *goodRatio;
@property (retain, nonatomic) IESECGoodsShopCommentModel *shopComment;
@property (copy, nonatomic) NSString *currentSelectGeneralID;
@property (nonatomic) BOOL isCurrentImpressionTag;
@property (copy, nonatomic) NSArray *sellPoints;
@property (copy, nonatomic) IESECGoodsDetailAuthorShopBindAuthorModel *referrer;
@property (retain, nonatomic) IESECPerfectCommentModel *perfectComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentsJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)impressionTagsJSONTransformer;
+ (id)referrerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
