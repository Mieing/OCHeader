@class JumpInfo, NSMutableArray, BaseResponse;

@interface GetFirstEnterInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contentList;
@property (retain, nonatomic) JumpInfo *enterJumpInfo;

+ (void)initialize;

@end
