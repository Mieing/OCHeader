@class NSNumber, NSString, NSArray;

@interface BDPWukongOperateBluetoothDevicesDiscoveryParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (retain, nonatomic) NSNumber *allowDuplicatesKey;
@property (retain, nonatomic) NSNumber *interval;
@property (copy, nonatomic) NSString *operate;
@property (nonatomic) long long powerLevel;
@property (copy, nonatomic) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonSchemaDict;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (id)init;

@end
