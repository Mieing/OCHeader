@class NSString;

@interface BDPWukongSetAppBackgroundColorParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonSchemaDict;


@end
