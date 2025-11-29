@class SubscribeReq, NSString, GetUserAlbumListReq, IamBizBaseResponse;

@interface UserAlbumListReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseResponse *baseRequest;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) GetUserAlbumListReq *listReq;
@property (retain, nonatomic) SubscribeReq *subReq;

+ (void)initialize;

@end
