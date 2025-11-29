@interface PayMenuRedDotHelper : NSObject

+ (void)handleMsg:(id)a0;
+ (void)updateInfo:(id)a0 withItem:(id)a1;
+ (id)getNewRedDotInfo;
+ (id)getRedDotItemWithRedDotId:(id)a0;
+ (BOOL)showRedDotAtName:(id)a0;
+ (id)wordingAtName:(id)a0;
+ (void)clearPayMenuRedDotForName:(id)a0;
+ (BOOL)showRedDotAtPayWallet;
+ (BOOL)showRedDotAtPay;
+ (BOOL)showRedDotAtMe;
+ (id)wordingAtWallet;
+ (void)clearRedDotAtPayWallet;
+ (void)clearRedDotAtWallet;
+ (void)clearRedDotAtWalletWithReport:(BOOL)a0;
+ (void)clearRedDotAtMe;

@end
