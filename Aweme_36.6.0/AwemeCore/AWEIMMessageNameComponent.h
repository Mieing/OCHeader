@class NSString;

@interface AWEIMMessageNameComponent : AWEIMFlexComponent <AWEIMMessageNameInterface>

@property (copy, nonatomic) NSString *groupAlias;
@property (nonatomic) BOOL isCustomPetElfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)p_createPresenterIfNeeded;
- (void)p_updatePresenter:(id)a0;
- (void)updateGroupNicknameNoti:(id)a0;
- (void)p_addKVO:(id)a0;
- (void)p_configTextColor;
- (void)p_nameTapped;
- (void).cxx_destruct;
- (id)displayName;
- (void)dealloc;

@end
