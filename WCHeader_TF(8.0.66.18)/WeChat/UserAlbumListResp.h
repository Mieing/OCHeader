@class GetUserAlbumListResp, SubscribeResp, IamBizBaseResponse;

@interface UserAlbumListResp : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseResponse *baseResponse;
@property (retain, nonatomic) GetUserAlbumListResp *listResp;
@property (retain, nonatomic) SubscribeResp *subResp;

+ (void)initialize;

@end
