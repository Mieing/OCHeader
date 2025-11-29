@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEECFeedGoodsCardProductModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEURLModel *productImg;
@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSArray *avatarList;
@property (nonatomic) long long goodCommentCount;
@property (retain, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSString *cardUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
