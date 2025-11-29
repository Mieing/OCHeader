@class NSString, EXTPKG_mmpayapplynfccardbo_CardTypeInfo, EXTPKG_mmpayapplynfccardbo_ExistOrderInfo, EXTPKG_mmpayapplynfccardbo_CardPasskitInfo, BaseResponse;

@interface NFCCardsQueryNFCCardInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardTypeInfo *cardTypeInfo;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_ExistOrderInfo *existOrderInfo;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardPasskitInfo *cardPasskitInfo;

+ (void)initialize;

@end
