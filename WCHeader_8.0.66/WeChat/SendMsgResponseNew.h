@class NSMutableArray, BaseResponse;

@interface SendMsgResponseNew : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int actionFlag;

+ (void)initialize;

@end
