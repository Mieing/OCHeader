@class NSString, IESPlatformSDKBaseReq, NSDictionary;

@interface IESPlatformSDKBaseResp : NSObject

@property (copy, nonatomic) NSString *responseId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) IESPlatformSDKBaseReq *originalReq;
@property (nonatomic) long long consumerProductType;
@property (nonatomic) long long platformProductType;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errString;
@property (copy, nonatomic) NSDictionary *passUserInfo;

- (void).cxx_destruct;
- (id)init;

@end
