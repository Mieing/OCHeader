@class IESLiveWalletMyCoinModel, QueryIncomeResult;

@interface IESLiveWalletMyCoinViewModel : NSObject

@property (retain, nonatomic) IESLiveWalletMyCoinModel *myCoinModel;
@property (retain, nonatomic) QueryIncomeResult *income;

- (void)updateDataWithCompletion:(id /* block */)a0;
- (void)p_updateMyCoinWithCompletion:(id /* block */)a0;
- (void)p_updateIncomeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
