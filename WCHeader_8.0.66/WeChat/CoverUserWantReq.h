@class BaseRequest, NSString;

@interface CoverUserWantReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *packetId;
@property (retain, nonatomic) NSString *userWantSign;

+ (void)initialize;

@end
