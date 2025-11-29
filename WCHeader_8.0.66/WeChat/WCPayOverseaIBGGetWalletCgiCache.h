@class WCPayOverseaGrayArea, NSString, WCPayOverseaThreePointArea, WCPayOverseaWalletTitle, NSMutableArray, WCPayOverseaWalletNotice;

@interface WCPayOverseaIBGGetWalletCgiCache : NSObject <PBCoding>

@property (retain, nonatomic) WCPayOverseaWalletTitle *walletTitle;
@property (retain, nonatomic) WCPayOverseaWalletNotice *walletNotice;
@property (retain, nonatomic) WCPayOverseaGrayArea *walletGrayArea;
@property (retain, nonatomic) WCPayOverseaThreePointArea *walletThreePointArea;
@property (nonatomic) unsigned int walletRegion;
@property (nonatomic) BOOL canSwitchWallet;
@property (retain, nonatomic) NSString *walletRegionDesc;
@property (retain, nonatomic) NSMutableArray *walletRegionDescArray;
@property (nonatomic) BOOL isShowUserKeyInfo;
@property (retain, nonatomic) NSString *userKeyInfoUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_walletTitle;
+ (void)PBArrayAdd_walletNotice;
+ (void)PBArrayAdd_walletGrayArea;
+ (void)PBArrayAdd_walletThreePointArea;
+ (void)PBArrayAdd_walletRegion;
+ (void)PBArrayAdd_canSwitchWallet;
+ (void)PBArrayAdd_walletRegionDesc;
+ (void)PBArrayAdd_walletRegionDescArray;
+ (void)PBArrayAdd_isShowUserKeyInfo;
+ (void)PBArrayAdd_userKeyInfoUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
