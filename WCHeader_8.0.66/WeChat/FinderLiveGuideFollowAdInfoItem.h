@class NSString, FinderAuthInfo;

@interface FinderLiveGuideFollowAdInfoItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) FinderAuthInfo *authInfo;
@property (retain, nonatomic) NSString *avatorImgUrl;
@property (nonatomic) BOOL isFollowed;
@property (nonatomic) unsigned int accountType;

+ (void)initialize;

@end
