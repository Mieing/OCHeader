@class GetCommentInfoResp_CommentModule, GetCommentInfoResp_CommentInvite, BaseResponse;

@interface GetCommentInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) GetCommentInfoResp_CommentModule *commentModule;
@property (retain, nonatomic) GetCommentInfoResp_CommentInvite *commentInvite;

+ (void)initialize;

@end
