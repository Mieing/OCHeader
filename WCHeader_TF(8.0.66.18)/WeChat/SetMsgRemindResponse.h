@class NSString, BaseResponse;

@interface SetMsgRemindResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *remindId;

+ (void)initialize;

@end
