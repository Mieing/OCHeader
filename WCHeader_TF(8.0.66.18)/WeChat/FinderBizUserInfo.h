@class NSString;

@interface FinderBizUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizNickname;
@property (retain, nonatomic) NSString *bizUsername;
@property (nonatomic) unsigned int bizFriendFollowCount;

+ (void)initialize;

- (void)setBizFriendFollowCount:(unsigned int)a0;
- (unsigned int)bizFriendFollowCount;
- (void)setBizUsername:(id)a0;
- (id)bizUsername;
- (void)setBizNickname:(id)a0;
- (id)bizNickname;

@end
