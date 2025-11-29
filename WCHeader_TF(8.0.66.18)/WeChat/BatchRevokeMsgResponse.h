@class NSString, NSMutableArray, BaseResponse;

@interface BatchRevokeMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
