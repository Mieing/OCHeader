@class NSString, NSDictionary, AWEHPTabBarBGSkinResource;

@interface AWEHPTabBarBGSkinConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL padEnable;
@property (nonatomic) BOOL hotReloadEnable;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *effect;
@property (copy, nonatomic) NSDictionary *tabs;
@property (copy, nonatomic) NSString *modelEffect;
@property (retain, nonatomic) AWEHPTabBarBGSkinResource *resources;
@property (nonatomic) double padLeftImageLeftPadding;
@property (nonatomic) double padRightImageRightPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isValidWithError:(id *)a0;

@end
