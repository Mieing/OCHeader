@class BaseRequest, NSMutableArray;

@interface WxaAppModUseUserInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *modInfoItem;

+ (void)initialize;

@end
