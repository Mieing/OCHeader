@class NSString, IESECURLModel, NSArray;

@interface IESECShopShareCardInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long shopId;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) IESECURLModel *shopLogo;
@property (copy, nonatomic) NSArray *tagList;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSArray *shopSellingPointTags;
@property (copy, nonatomic) NSArray *shopProductCovers;
@property (readonly, nonatomic) long long productNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
