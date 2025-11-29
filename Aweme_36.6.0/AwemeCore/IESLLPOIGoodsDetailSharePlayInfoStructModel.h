@class NSString, IESLLPOIGoodsDetailSharePlayInfoModel;

@interface IESLLPOIGoodsDetailSharePlayInfoStructModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOIGoodsDetailSharePlayInfoModel *sharePlayInfo;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharePlayInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
