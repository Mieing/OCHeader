@class InterceptPopUp, NSString, MidasSdkInfo, BaseResponse;

@interface PrepareWecoinRechargeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MidasSdkInfo *sdkInfo;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *urlParams;
@property (retain, nonatomic) NSString *saveValue;
@property (retain, nonatomic) InterceptPopUp *interceptInfo;

+ (void)initialize;

@end
