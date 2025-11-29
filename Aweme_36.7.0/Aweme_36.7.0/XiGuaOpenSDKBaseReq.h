@class NSString, NSDictionary, NSURL, NSDate;

@interface XiGuaOpenSDKBaseReq : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *provider_requestId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSDate *createDate;
@property (retain, nonatomic) NSDate *sendDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (id)postExtraInfo;
- (void).cxx_destruct;
- (id)init;

@end
