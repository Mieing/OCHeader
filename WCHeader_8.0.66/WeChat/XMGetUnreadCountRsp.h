@class BaseResponse;

@interface XMGetUnreadCountRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int unreadcount;

+ (void)initialize;

@end
