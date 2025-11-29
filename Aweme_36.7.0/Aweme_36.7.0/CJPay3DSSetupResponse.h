@class CJPay3DSAuthInfo, NSString;

@interface CJPay3DSSetupResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPay3DSAuthInfo *authInfo;
@property (copy, nonatomic) NSString *channelOrderNo;
@property (copy, nonatomic) NSString *outChannelOrderNo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
