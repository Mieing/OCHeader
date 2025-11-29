@class NSString, AWEHPTabBarBGSkinConfigModel;

@interface AWEHPTabBarBGSkinHambConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEHPTabBarBGSkinConfigModel *normalModeConfig;
@property (retain, nonatomic) AWEHPTabBarBGSkinConfigModel *teenModeConfig;
@property (retain, nonatomic) AWEHPTabBarBGSkinConfigModel *basicModeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
