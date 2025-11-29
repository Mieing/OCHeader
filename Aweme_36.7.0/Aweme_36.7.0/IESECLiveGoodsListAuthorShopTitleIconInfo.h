@class NSString, NSDictionary, IESECLiveImageURLModel;

@interface IESECLiveGoodsListAuthorShopTitleIconInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *icon;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *trackEvent;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
