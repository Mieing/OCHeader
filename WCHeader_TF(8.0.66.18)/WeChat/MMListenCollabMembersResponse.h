@class NSMutableArray, BaseResponse;

@interface MMListenCollabMembersResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *members;

+ (void)initialize;

@end
