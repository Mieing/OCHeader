@class IESECSKUProductInfoParamsModel, NSString, NSArray, IESECSKUPlatformParamsParamsModel, NSDictionary, IESECSKUUserInfoParamsModel, IESECSKUCustomParamsParamsModel, IESECSKUChainInfoParamsModel, IESECSKUClientParamsParamsModel, IESECSKUBizContextParamsModel;

@interface IESECSKUParamsModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *hotSaleSkuId;
@property (readonly, nonatomic) NSString *creativeID;
@property (retain, nonatomic) IESECSKUProductInfoParamsModel *productInfo;
@property (retain, nonatomic) IESECSKUUserInfoParamsModel *userInfo;
@property (retain, nonatomic) IESECSKUClientParamsParamsModel *clientParams;
@property (retain, nonatomic) IESECSKUPlatformParamsParamsModel *platformParams;
@property (retain, nonatomic) NSArray *passThrough;
@property (retain, nonatomic) IESECSKUChainInfoParamsModel *chainInfo;
@property (retain, nonatomic) IESECSKUBizContextParamsModel *bizContext;
@property (retain, nonatomic) IESECSKUCustomParamsParamsModel *customParams;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (retain, nonatomic) NSDictionary *orderParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schemaV2ParamsFromShowRequest:(id)a0;
+ (id)schemaV2ParamsFromOriginParams:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)schemaV2ParamsFromNativeContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)schemaV2ParamsFromCalculatedParams:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)schemaV2ParamsFromJSBParams:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)simplifySchemaPassthroughParams:(id)a0 withActionType:(long long)a1;
+ (id)orderParamsFromOrigin:(id)a0;
+ (id)schemaParamsFilterWhiteList:(id)a0;
+ (id)schemaParamsFilterValue:(id)a0;
+ (id)generatePassthroughParamsWithParams:(id)a0;
+ (id)passThroughJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)findPassThroughData:(id)a0;
- (void).cxx_destruct;

@end
