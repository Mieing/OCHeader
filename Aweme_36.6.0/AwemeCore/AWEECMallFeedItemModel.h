@class NSString, NSArray, AWEAwemeModel, NSDictionary;

@interface AWEECMallFeedItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSArray *productInfo;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeJSONTransformer;
+ (id)productInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)bindAwemeWithMallInfo;
- (void).cxx_destruct;

@end
