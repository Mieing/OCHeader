@class NSDictionary, NSString;

@interface BDPWukongDiamondPaymentParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonSchemaDict;


@end
