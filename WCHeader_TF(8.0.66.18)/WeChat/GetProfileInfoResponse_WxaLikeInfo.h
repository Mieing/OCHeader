@class NSString;

@interface GetProfileInfoResponse_WxaLikeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *headimg;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) BOOL selfLike;

+ (void)initialize;

@end
