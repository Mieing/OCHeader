@class DVEVCContext, NSArray, NSMapTable, NSString, NSMutableArray, UIViewController;
@protocol DVEComponentActionProtocol, DVEBarComponentProtocol;

@interface DVEComponentViewManager : NSObject <DVEComponentViewManagerProtocol>

@property (weak, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) UIViewController *parentVC;
@property (weak, nonatomic) UIViewController *bottomVC;
@property (retain, nonatomic) id<DVEBarComponentProtocol> treeComponents;
@property (retain, nonatomic) NSMutableArray *linkBar;
@property (weak, nonatomic) id<DVEComponentActionProtocol> componentActionHandler;
@property (copy, nonatomic) NSArray *globalComponents;
@property (retain, nonatomic) NSMapTable *typeComponentsMap;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)componentBarHeight;

- (id)showComponent:(id)a0;
- (long long)currentBarType;
- (void)setupTreeComponents:(id)a0 parentVC:(id)a1 bottomVC:(id)a2 context:(id)a3;
- (void)unSetupTreeComponents;
- (void)setupGlobalComponents:(id)a0;
- (id)currentBar;
- (long long)currentSubGroup;
- (long long)currentShowedPanelType;
- (void)callComponentActionWithType:(long long)a0;
- (void)callComponentActionWithType:(long long)a0 groupType:(long long)a1;
- (void)callComponentActionWithType:(long long)a0 params:(id)a1;
- (id)showComponentWithType:(long long)a0 groupType:(long long)a1 userInfo:(id)a2 animation:(BOOL)a3;
- (id)showComponent:(id)a0 animation:(BOOL)a1;
- (id)popToParentComponent:(BOOL)a0;
- (void)refreshCurrentBarGroupType;
- (void)loopComponentWithType:(long long)a0 handle:(id /* block */)a1;
- (void)cacheComponentToMap:(id)a0;
- (id)firstComponentWithType:(long long)a0;
- (void)popToComponent:(long long)a0;
- (void)popToComponent:(long long)a0 groupType:(long long)a1;
- (void)popToComponent:(long long)a0 groupType:(long long)a1 animation:(BOOL)a2;
- (id)createSecondBar:(id)a0;
- (id)createCurrentBarViewWithBarComponent:(id)a0;
- (unsigned long long)selectorArgumentCount:(SEL)a0;
- (void).cxx_destruct;
- (void)popToRoot;

@end
