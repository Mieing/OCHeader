@class BaseRequest, NSString;

@interface SnsWwLikeCoverRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *bgurl;
@property (retain, nonatomic) NSString *bgmd5Sum;
@property (retain, nonatomic) NSString *bgfileid;

+ (void)initialize;

@end
