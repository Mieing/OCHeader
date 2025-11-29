@class WalletKeyInfo, NSString, WalletThreePointArea, WalletRequestInfo, BaseResponse, NSMutableArray, WalletTitle, WalletGrayArea, WalletNotice, PopUp;

@interface PayIBGGetOverseaWalletResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;
@property (retain, nonatomic) WalletTitle *walletTitle;
@property (retain, nonatomic) WalletNotice *walletNotice;
@property (retain, nonatomic) WalletGrayArea *walletGrayArea;
@property (retain, nonatomic) WalletThreePointArea *walletThreepointArea;
@property (nonatomic) unsigned int walletRegion;
@property (nonatomic) BOOL canSwitchWallet;
@property (retain, nonatomic) NSString *walletRegionDesc;
@property (retain, nonatomic) NSMutableArray *walletRegionDescArray;
@property (retain, nonatomic) WalletKeyInfo *walletKeyInfo;
@property (retain, nonatomic) PopUp *popUp;
@property (retain, nonatomic) WalletRequestInfo *walletRequest;

+ (void)initialize;

@end
