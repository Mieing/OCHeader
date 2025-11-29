@class NSString, NSDictionary;

@interface IESECBuyNowPayStatusInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *returnUrl;
@property (copy, nonatomic) NSString *urlType;
@property (nonatomic) long long payStatus;
@property (copy, nonatomic) NSString *urlBtm;
@property (copy, nonatomic) NSDictionary *urlBcm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
