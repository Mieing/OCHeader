@class IESLLPOIGoodsDetailSharePlayInfoStructModel, NSString;

@interface IESLLPOIGoodsDetailMarketingShareInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOIGoodsDetailSharePlayInfoStructModel *masterSharePlayInfo;
@property (retain, nonatomic) IESLLPOIGoodsDetailSharePlayInfoStructModel *guestSharePlayInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
