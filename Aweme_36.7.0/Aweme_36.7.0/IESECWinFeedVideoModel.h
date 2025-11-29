@class IESECURLModel, IESECRelationGoodsModel, NSArray, NSString, IESECFeedCommentButton, IESECFeedBuyButton;

@interface IESECWinFeedVideoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *videoCover;
@property (retain, nonatomic) IESECURLModel *videoPlayAddr;
@property (retain, nonatomic) IESECRelationGoodsModel *product;
@property (retain, nonatomic) IESECFeedBuyButton *productBuyButton;
@property (retain, nonatomic) NSArray *bulletTags;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) IESECURLModel *shopBrandIcon;
@property (retain, nonatomic) NSArray *comments;
@property (retain, nonatomic) IESECFeedCommentButton *commentButton;
@property (retain, nonatomic) NSArray *descriptions;
@property (retain, nonatomic) NSArray *recommendTags;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long buyShareID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentsJSONTransformer;
+ (id)bulletTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
