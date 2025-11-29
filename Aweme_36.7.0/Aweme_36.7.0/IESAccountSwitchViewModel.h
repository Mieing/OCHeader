@class NSArray, NSDictionary, DUXLoadingToast;

@interface IESAccountSwitchViewModel : NSObject

@property (nonatomic) BOOL isHalfScreen;
@property (retain, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) NSDictionary *extraDict;

- (id)enterFrom;
- (void)handleCommonVerificationNotification:(id)a0;
- (long long)accountCount;
- (id)initWithIsHalfScreen:(BOOL)a0 extraDict:(id)a1;
- (void)trackAccountShow;
- (void)updateCellModelsWithStorage;
- (id)getUserModelWithIndex:(long long)a0;
- (void)didSelectAtPreCheckRowIndex:(long long)a0 switchCompletion:(id /* block */)a1;
- (void)trackSwitchAccountClickPosition:(id)a0;
- (void)didSelectRowAtIndex:(long long)a0 switchCompletion:(id /* block */)a1;
- (void)switchAccountAction:(id)a0 switchCompletion:(id /* block */)a1;
- (void)addUserAction;
- (void)trackSwitchAccountResult:(id)a0 model:(id)a1;
- (void)trackSwitchAccountSubmitWithModel:(id)a0;
- (id)cellModelTypeAccount;
- (id)switchAccountTypeWithModel:(id)a0;
- (void).cxx_destruct;
- (id)source;
- (void)stopLoading;
- (void)dealloc;
- (double)cellHeight;
- (void)fetchAccounts:(id /* block */)a0;

@end
