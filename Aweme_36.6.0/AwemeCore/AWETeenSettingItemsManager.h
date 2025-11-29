@class NSString;

@interface AWETeenSettingItemsManager : NSObject

@property (nonatomic) BOOL showWalletEntrance;
@property (copy, nonatomic) NSString *walletSchema;
@property (nonatomic) BOOL showBalanceWithdrawEntrance;
@property (copy, nonatomic) NSString *balanceWithdrawSchema;

+ (id)sharedInstance;

- (BOOL)isServerForceTeenModeOn;
- (BOOL)isForceU14User;
- (void)fetchWalletEntranceRequest;
- (void)fetchBalanceWithdrawEntranceRequest;
- (void).cxx_destruct;

@end
