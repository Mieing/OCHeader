@class NSString, NSMutableDictionary;

@interface AWEBarItemResourceConfigRecorderManagerImpl : NSObject <ACCBarItemResourceConfigManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *configHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allowListInPureMode;
- (id)configForIdentifier:(void *)a0;
- (BOOL)enableTitle;
- (void)setupBarItemConfig;
- (id)filterResourceConfig;
- (id)selectMusicResourceConfig;
- (id)beautyResourceConfig;
- (id)speedControlResourceConfig;
- (id)advancedSettingResourceConfig;
- (id)propFavouriteResourceConfig;
- (id)propCreatorResourceConfig;
- (id)propSecurityResourceConfig;
- (id)quickFlashResourceConfig;
- (void).cxx_destruct;
- (id)init;

@end
