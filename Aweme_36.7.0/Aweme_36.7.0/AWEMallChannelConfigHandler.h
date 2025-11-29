@class NSArray, NSString;

@interface AWEMallChannelConfigHandler : NSObject <AWEECMallChannelBarConfigProtocol>

@property (copy, nonatomic) NSArray *iconModels;
@property (copy, nonatomic) NSArray *bottomIconModels;
@property (copy, nonatomic) NSArray *badgeModels;
@property (copy, nonatomic) NSArray *themeModels;
@property (copy, nonatomic) NSArray *bottomThemeModels;
@property (copy, nonatomic) NSArray *transModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)themeModel;
- (id)mallBottomTabIconModel;
- (id)bottomTheme;
- (id)transMap;
- (unsigned long long)scopeOfTask:(id)a0;
- (id)mallTabIconModel;
- (id)parseModelList:(id)a0 withModelClass:(Class)a1 dogTime:(double)a2;
- (id)sortTasks:(id)a0;
- (id)mallBadgeModel;
- (id)transModel;
- (id)bottomThemeModel;
- (void).cxx_destruct;
- (id)init;
- (id)theme;
- (void)setup;

@end
