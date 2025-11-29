@class YYCache, AWEStudioSpecialPlusModel, NSString;

@interface AWEStudioSuperEntranceConfigManager : HTSService <AWEStudioSuperEntranceConfigManager, AWEUserMessage, AWEAppStudioSettingMessageProtocol>

@property (retain, nonatomic) YYCache *yyCache;
@property (retain, nonatomic) YYCache *specialPulsCache;
@property (retain, nonatomic) AWEStudioSpecialPlusModel *specialPlusConfigModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configModel;
+ (id)yyCache;
+ (id)specialPulsCache;
+ (id)specialPulsConfigModel;
+ (void)updateSpecialPlusConfigModel;
+ (void)cacheSpecialPlusConfigModel:(id)a0;
+ (void)cleanCache;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)configModel;
- (void)settingDidChange;
- (void)updateSpecialPlusConfigModel;
- (void)cacheSpecialPlusConfigModel:(id)a0;
- (id)cachedSpecialPlusConfigModel;
- (id)cachedConfigModel;
- (void)cacheConfigModel:(id)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)dealloc;

@end
