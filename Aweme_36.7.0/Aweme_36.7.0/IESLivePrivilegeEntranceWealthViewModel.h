@class NSDictionary, NSString;

@interface IESLivePrivilegeEntranceWealthViewModel : IESLiveCubeViewModel <IESLiveIncomeResultUpdateAction>

@property (copy, nonatomic) NSDictionary *selectedGiftInfo;
@property (nonatomic) BOOL shouldShowWealthView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)incomeResultDidUpdate;
- (void)actionSelectedGiftInfo:(id)a0;
- (double)wealthViewHeight;
- (BOOL)shouldShowPrivilegeEntranceWealth;
- (void).cxx_destruct;
- (id)init;

@end
