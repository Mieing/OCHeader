@class NSString, NSNumber;

@interface BDPWukongCreateBLEConnectionParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSNumber *timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)jsonSchemaDict;


@end
