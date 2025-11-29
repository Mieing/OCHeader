@class NSString, NSDictionary, NSURL, NSDate;

@interface IESPlatformSDKBaseReq : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) NSDate *createDate;
@property (retain, nonatomic) NSDate *sendDate;
@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *callbackURLScheme;
@property (retain, nonatomic) NSURL *originalURL;
@property (nonatomic) long long consumerProductType;
@property (nonatomic) long long platformProductType;
@property (copy, nonatomic) NSDictionary *passUserInfo;

- (void).cxx_destruct;
- (id)init;

@end
