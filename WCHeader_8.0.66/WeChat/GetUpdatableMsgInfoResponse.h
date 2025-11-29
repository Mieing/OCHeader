@class NSMutableArray, BaseResponse;

@interface GetUpdatableMsgInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *updatableMsgList;

+ (void)initialize;

@end
