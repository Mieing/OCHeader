@class NSDictionary, NSMutableDictionary;

@interface IESECWebImageTemplateManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *templateCache;
@property (copy, nonatomic) NSDictionary *abTestMap;
@property (copy, nonatomic) NSDictionary *settingMap;
@property (copy, nonatomic) NSDictionary *blockMap;

+ (id)sharedInstance;

- (id)reportConfigInfoForBizTag:(id)a0 sceneTag:(id)a1;
- (id)configKeyForBizTag:(id)a0 sceneTag:(id)a1;
- (id)templateRulesForUrl:(id)a0 configKey:(id)a1;
- (id)p_templateConfigForKey:(id)a0;
- (id)p_filterKeyForUrl:(id)a0 filters:(id)a1;
- (void)configInfoForBizTag:(id)a0 sceneTag:(id)a1 callback:(id /* block */)a2;
- (id)p_combineKeyForBizTag:(id)a0 sceneTag:(id)a1;
- (BOOL)p_blockRemakeTemplateForKey:(id)a0;
- (id)p_configKeyForBizTag:(id)a0 sceneTag:(id)a1 fromABTest:(BOOL)a2;
- (id)p_configKeyForIdentifier:(id)a0 fromABTest:(BOOL)a1;
- (id)tp_createTemplateRulesModel:(id)a0;
- (id)p_findGroupStringFromUrl:(id)a0 checkResult:(id)a1 groupIdx:(long long)a2;
- (id)templateRulesForUrl:(id)a0 bizTag:(id)a1 sceneTag:(id)a2;
- (id)configKeyForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
