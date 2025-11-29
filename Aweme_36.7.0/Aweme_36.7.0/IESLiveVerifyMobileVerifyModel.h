@class NSString, NSDictionary;

@interface IESLiveVerifyMobileVerifyModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isVerified;
@property (copy, nonatomic) NSString *mobile;
@property (nonatomic) int mobileUserType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
