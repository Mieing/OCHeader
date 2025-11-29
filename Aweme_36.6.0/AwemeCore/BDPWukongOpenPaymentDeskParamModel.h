@class NSString, NSDictionary;

@interface BDPWukongOpenPaymentDeskParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *invokeSource;
@property (copy, nonatomic) NSString *invokeType;
@property (copy, nonatomic) NSDictionary *sdkInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonSchemaDict;


@end
