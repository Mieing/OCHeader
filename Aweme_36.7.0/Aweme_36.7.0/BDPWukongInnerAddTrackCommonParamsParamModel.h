@class NSDictionary, NSArray, NSString;

@interface BDPWukongInnerAddTrackCommonParamsParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSArray *highPriorities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonSchemaDict;


@end
