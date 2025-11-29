@class NSMutableArray, BaseResponse;

@interface BatchGetSimpleChatroomMemberResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *simpleDataList;

+ (void)initialize;

@end
