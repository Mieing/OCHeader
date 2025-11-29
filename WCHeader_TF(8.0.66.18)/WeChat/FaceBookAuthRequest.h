@class BaseRequest, NSString;

@interface FaceBookAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *accessToken;
@property (retain, nonatomic) NSString *randomEncryKey;

+ (void)initialize;

@end
