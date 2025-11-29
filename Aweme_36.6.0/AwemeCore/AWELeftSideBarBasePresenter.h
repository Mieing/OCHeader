@class NSString, NSObject;
@protocol AWELeftSideBarItemAbility, AWELeftSideBarEntranceViewAbility, AWEMessageReachLeftSideBarAbility, AWELeftSideBarItemContext, AWEHPListKitItemControllerContext;

@interface AWELeftSideBarBasePresenter : NSObject <AWELeftSideBarBaseProtocol, AWEHPListKitItemControllerProtocol, AWELeftSideBarAmbienceUIDynamicProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) NSObject<AWEHPListKitItemControllerContext> *hpListKitItemContext;
@property (retain, nonatomic) id<AWELeftSideBarEntranceViewAbility> leftSideBarEntranceViewProxy;
@property (retain, nonatomic) id<AWELeftSideBarItemAbility> leftSideBarProxy;
@property (retain, nonatomic) id<AWEMessageReachLeftSideBarAbility> messageReachProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentThemeStyle;
- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (BOOL)needUpdateLeftSideBarContextWithModuleType:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (void)updateLeftSideBarContext:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (BOOL)canReloadWithContext:(id)a0 extraData:(id)a1;
- (void)reloadWithContext:(id)a0 extraData:(id)a1;
- (BOOL)needLoadHPController;
- (void)setUpLeftSideBarPresenterProxyModel:(id)a0;
- (void).cxx_destruct;

@end
