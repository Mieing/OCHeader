@class NSString, ZimAliCloudValidateResponse;

@interface ZimVerifyNetworkResult : NSObject

@property (retain, nonatomic) ZimAliCloudValidateResponse *ResultObject;
@property (retain, nonatomic) NSString *RequestId;
@property (retain, nonatomic) NSString *Code;

- (void).cxx_destruct;
- (id)init;

@end
