@class NSString, NSArray, NSDictionary, IESECLiveGoodsCombinationExtroInfoModel;

@interface IESECLiveGoodsCombinationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundURL;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *itemTitle;
@property (nonatomic) BOOL isExplaining;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *leftIcon;
@property (copy, nonatomic) NSString *rightIcon;
@property (retain, nonatomic) NSArray *rightText;
@property (retain, nonatomic) NSArray *products;
@property (retain, nonatomic) IESECLiveGoodsCombinationExtroInfoModel *extroInfo;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)rightTextJSONTransformer;
+ (id)extroInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
