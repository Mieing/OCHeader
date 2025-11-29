@class NSString, IESECURLModel;

@interface IESECMallInnerFeedProductShopBaseInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopLink;
@property (retain, nonatomic) IESECURLModel *shopLogo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
