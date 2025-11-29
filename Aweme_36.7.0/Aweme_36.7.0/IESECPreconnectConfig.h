@class NSDictionary, NSString, IESECPreconnectSceneConfig;

@interface IESECPreconnectConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long enable;
@property (nonatomic) long long loopDelayTime;
@property (nonatomic) long long backgroundRestoreTime;
@property (retain, nonatomic) IESECPreconnectSceneConfig *appLaunchConfig;
@property (copy, nonatomic) NSDictionary *bizScopeConfigDic;
@property (copy, nonatomic) NSDictionary *bizScopeConfigMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)parseBizScopeConfigMapFromJSON:(id)a0;
- (void).cxx_destruct;

@end
