@class NSString, NSMutableArray, BaseResponse;

@interface GetHtmlTransTextResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int msgCount;
@property (retain, nonatomic) NSMutableArray *msgList;
@property (retain, nonatomic) NSString *toLang;

+ (void)initialize;

@end
