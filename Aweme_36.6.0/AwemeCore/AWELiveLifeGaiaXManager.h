@class NSString, NSMutableDictionary;

@interface AWELiveLifeGaiaXManager : NSObject

@property (copy, nonatomic) NSString *geckoTemplatePath;
@property (retain, nonatomic) NSMutableDictionary *geckoTemplateIdExistCache;
@property (retain, nonatomic) NSMutableDictionary *localTemplateIdExistCache;

+ (id)shareManager;

- (void)setupGaiaX;
- (id)geckoPackageVersion;
- (id)localLiveBizId;
- (id)expoundCardTemplateIdWithGeckoVersion:(id)a0;
- (void)updateExpoundCardTemplateCacheIfNeeded;
- (id)localBundlePath;
- (id)experimentTemplateIdWithOriginId:(id)a0;
- (BOOL)templateCacheExistWithTemplateId:(id)a0 geckoVersion:(id)a1;
- (BOOL)fileExistAtGeckoWithTemplateId:(id)a0 geckoVersion:(id)a1;
- (BOOL)fileExistAtLocalWithTemplateId:(id)a0;
- (id)realTemplateIdWithOriginId:(id)a0 geckoVersion:(id)a1;
- (id)shelfCellTemplateIdWithGeckoVersion:(id)a0;
- (BOOL)isInhouseGeckoEnv;
- (void)updateShelfCellTemplateCacheIfNeeded;
- (void).cxx_destruct;

@end
