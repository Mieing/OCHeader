@class NSString, AWEHPGreyConfigModel, AWEHPGreyConfigSpecialModeModel;

@interface AWEHPGreyHambConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEHPGreyConfigModel *normalModeConfig;
@property (retain, nonatomic) AWEHPGreyConfigSpecialModeModel *teenModeConfig;
@property (retain, nonatomic) AWEHPGreyConfigSpecialModeModel *basicModeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
