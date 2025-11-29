@class NSArray, NSString;

@interface BDPWukongJoinGroupDirectlyV2ParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSArray *groupIDS;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)jsonSchemaDict;


@end
