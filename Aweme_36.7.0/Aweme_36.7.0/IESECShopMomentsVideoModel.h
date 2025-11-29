@class NSString, IESECShopGoodsModel, NSDictionary, NSNumber;

@interface IESECShopMomentsVideoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long momentType;
@property (retain, nonatomic) NSNumber *momentId;
@property (copy, nonatomic) NSString *momentIdStr;
@property (copy, nonatomic) NSString *momentTime;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) IESECShopGoodsModel *goodsModel;
@property (copy, nonatomic) NSString *feedData;
@property (copy, nonatomic) NSDictionary *feedDataDic;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic, getter=isEnableNewStyle) BOOL enableNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedDataDicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
