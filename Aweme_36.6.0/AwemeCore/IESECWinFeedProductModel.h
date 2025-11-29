@class NSArray, IESECFeedCommentButton, NSDictionary, IESECGoodsDetailModel, NSString;

@interface IESECWinFeedProductModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailModel *promotion;
@property (retain, nonatomic) NSArray *bulletTags;
@property (retain, nonatomic) NSArray *comments;
@property (retain, nonatomic) IESECFeedCommentButton *commentButton;
@property (copy, nonatomic) NSDictionary *ritTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentsJSONTransformer;
+ (id)bulletTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
