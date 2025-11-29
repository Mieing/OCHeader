@class NSArray, NSString;

@interface IESIMSingleSettingsDataComponent : AWEIMComponentBase <IESIMChatSettingsDataInterface>

@property (copy, nonatomic) NSArray *sectionModels;
@property (copy, nonatomic) NSString *navigationTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (BOOL)isAutoBigFontStyle;
- (void)p_updateUserStatusIfNeed;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)reloadSections;

@end
