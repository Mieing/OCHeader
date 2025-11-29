@class IESECMallDeepFeedProductShopBaseInfoModel, NSString;

@interface IESECMallDeepFeedProductShopInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) IESECMallDeepFeedProductShopBaseInfoModel *base;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
