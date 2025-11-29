@class NSMutableArray, BaseResponse;

@interface BatchGetContactBriefInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;

+ (void)initialize;

@end
