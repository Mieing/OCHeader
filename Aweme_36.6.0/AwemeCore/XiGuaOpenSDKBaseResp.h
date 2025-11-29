@class NSString, XiGuaOpenSDKBaseReq;

@interface XiGuaOpenSDKBaseResp : NSObject

@property (copy, nonatomic) NSString *responseId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) XiGuaOpenSDKBaseReq *originalBaseReq;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errString;

- (void).cxx_destruct;
- (id)init;

@end
