@class NSString, AWEUserModel;

@interface AWEUserDataHomeComponent : AWEUserHomeBaseComponent <AWEUserDataHomeComponentProtocol>

@property (nonatomic) BOOL isSwitchingAccount;
@property (retain, nonatomic) AWEUserModel *mockUserForSwitch;
@property (readonly, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL needRefreshProfileWhenAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsRefreshDataWithSource:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)onInit;

@end
