@class NSString, IESSDKBaseReq, NSDictionary;

@interface IESSDKBaseResp : NSObject

@property (copy, nonatomic) NSString *responseId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) IESSDKBaseReq *originalBaseReq;
@property (nonatomic) long long consumerProductType;
@property (nonatomic) long long platformProductType;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errString;
@property (copy, nonatomic) NSDictionary *passUserInfo;
@property (copy, nonatomic) NSString *userID;

- (void).cxx_destruct;
- (id)init;

@end
