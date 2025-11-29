@class BaseRequest, NSString;

@interface AddAvatarHeadImgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *headimgurlCdn;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
