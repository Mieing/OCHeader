@class OpenIMContact;

@interface GetOpenIMContactResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) OpenIMContact *contact;

+ (void)initialize;

@end
