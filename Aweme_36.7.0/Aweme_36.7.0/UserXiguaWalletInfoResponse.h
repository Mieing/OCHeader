@class UserXiguaWalletInfoResponseData;

@interface UserXiguaWalletInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UserXiguaWalletInfoResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
