@class NSDictionary, NSString;

@interface IESECLivePromotionCardStyleConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *buyBtnStyleConfigDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buyBtnStyleConfigDicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
