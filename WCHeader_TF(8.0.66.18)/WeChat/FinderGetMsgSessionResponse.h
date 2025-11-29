@class NSMutableArray, BaseResponse;

@interface FinderGetMsgSessionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *sessionProfileList;

+ (void)initialize;

@end
