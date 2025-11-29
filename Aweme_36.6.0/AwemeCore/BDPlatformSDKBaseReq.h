@class NSString, NSURL, NSDate;

@interface BDPlatformSDKBaseReq : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) NSDate *createDate;
@property (retain, nonatomic) NSDate *sendDate;
@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *callbackURLScheme;
@property (retain, nonatomic) NSURL *originalURL;

- (void).cxx_destruct;
- (id)init;

@end
