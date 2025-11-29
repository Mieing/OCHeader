@class NSString, BDPlatformSDKBaseReq, NSDictionary;

@interface BDPlatformSDKBaseResp : NSObject

@property (copy, nonatomic) NSString *responseId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) BDPlatformSDKBaseReq *originalReq;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errString;
@property (copy, nonatomic) NSDictionary *sdkExtraInfo;

- (void).cxx_destruct;
- (id)init;

@end
