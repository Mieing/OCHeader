@class BDUGLuckyGlobalGecko, BDUGLuckyCooling, BDUGLuckyCancelData, NSArray, BDUGLuckyShakeData, BDUGLuckyDomain, NSDictionary, BDUGLuckyPreCongfig, BDUGLuckyNotificationConfig, BDUGLuckyFeRules, BDUGLuckyLowUpdate;
@protocol BDUGLuckySceneTimeInfo;

@interface BDUGLuckyStaticCommonInfo : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyShakeData *shakeData;
@property (retain, nonatomic) BDUGLuckyCancelData *cancelData;
@property (retain, nonatomic) BDUGLuckyLowUpdate *lowUpdate;
@property (retain, nonatomic) BDUGLuckyGlobalGecko *gecko;
@property (retain, nonatomic) BDUGLuckyDomain *domain;
@property (retain, nonatomic) BDUGLuckyFeRules *feRules;
@property (copy, nonatomic) NSDictionary *pageDependency;
@property (copy, nonatomic) NSArray<BDUGLuckySceneTimeInfo> *sceneTimeInfos;
@property (retain, nonatomic) BDUGLuckyCooling *cooling;
@property (retain, nonatomic) BDUGLuckyNotificationConfig *notificationConfig;
@property (retain, nonatomic) BDUGLuckyPreCongfig *preConfig;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
