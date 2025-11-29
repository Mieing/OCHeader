@class NSNumber, NSString, NSArray;

@interface IESECGoodsShopCommentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *goodCount;
@property (copy, nonatomic) NSString *goodRatio;
@property (retain, nonatomic) NSNumber *praiseRate;
@property (copy, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
