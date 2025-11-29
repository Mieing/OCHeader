@class AWEPOIGoodsDetailSharePlayInfoModel, NSString;

@interface AWEPOIGoodsDetailSharePlayInfoStructModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIGoodsDetailSharePlayInfoModel *sharePlayInfo;
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
