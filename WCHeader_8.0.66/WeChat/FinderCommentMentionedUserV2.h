@class NSData, FinderMentionedUser;

@interface FinderCommentMentionedUserV2 : WXPBGeneratedMessage

@property (retain, nonatomic) FinderMentionedUser *userInfo;
@property (nonatomic) unsigned int startPos;
@property (retain, nonatomic) NSData *cliBuff;

+ (void)initialize;

- (void)setCliBuff:(id)a0;
- (id)cliBuff;
- (void)setStartPos:(unsigned int)a0;
- (unsigned int)startPos;
- (void)setUserInfo:(id)a0;
- (id)userInfo;

@end
