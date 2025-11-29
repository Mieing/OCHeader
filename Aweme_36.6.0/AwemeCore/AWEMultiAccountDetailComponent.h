@class NSString;

@interface AWEMultiAccountDetailComponent : AWEUserDetailBaseComponent <AWEMultiAccountDetailComponentProtocol>

@property (nonatomic) BOOL needShowQuickSwitch;
@property (nonatomic) BOOL isQuickSwitchAccountProduce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)viewDidAppear;
- (void)onInit;

@end
