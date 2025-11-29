@class NSString;

@interface BDPWukongCheckFollowAwemeStateParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *awemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)jsonSchemaDict;


@end
