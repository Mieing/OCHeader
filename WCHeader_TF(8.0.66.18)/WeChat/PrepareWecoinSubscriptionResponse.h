@class WecoinSubscriptionAgreementHalfPage, NSString, InterceptPopUp, MidasSdkInfo, BaseResponse;

@interface PrepareWecoinSubscriptionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MidasSdkInfo *sdkInfo;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *urlParams;
@property (retain, nonatomic) WecoinSubscriptionAgreementHalfPage *agreementHalfPage;
@property (retain, nonatomic) InterceptPopUp *interceptInfo;

+ (void)initialize;

@end
