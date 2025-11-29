@class NSString, DiamondBuyResult_IapFailExtraData, GPBInt64Array;

@interface DiamondBuyResult_ResponseExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL iosShowRecharge;
@property (copy, nonatomic) NSString *bdturingVerify;
@property (nonatomic) BOOL iapFail;
@property (retain, nonatomic) DiamondBuyResult_IapFailExtraData *iapFailExtraData;
@property (nonatomic) BOOL hasIapFailExtraData;
@property (copy, nonatomic) NSString *twoFactoryAuthInfo;
@property (retain, nonatomic) GPBInt64Array *allowBankPaymentArray;
@property (readonly, nonatomic) unsigned long long allowBankPaymentArray_Count;

+ (id)descriptor;

@end
