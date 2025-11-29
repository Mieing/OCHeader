@class NSString, NSDictionary;

@interface BDECPigeonMessageSendResponse : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) long long checkCode;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) long long sendMethodType;
@property (copy, nonatomic) NSDictionary *responseInErrorInfo;
@property (copy, nonatomic) NSString *checkMessage;

- (void).cxx_destruct;

@end
