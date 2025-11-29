@class NSString;

@interface BulletCommentUserInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int postIdentity;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int isInBlackList;
@property (retain, nonatomic) NSString *headImgUrl;

+ (void)initialize;

@end
