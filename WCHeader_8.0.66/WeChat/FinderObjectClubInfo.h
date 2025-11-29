@class NSString;

@interface FinderObjectClubInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatroomId;
@property (retain, nonatomic) NSString *posterChatroomNickname;
@property (nonatomic) unsigned int clubRole;
@property (nonatomic) unsigned int isFeedAuthor;

+ (void)initialize;

- (void)setIsFeedAuthor:(unsigned int)a0;
- (unsigned int)isFeedAuthor;
- (void)setClubRole:(unsigned int)a0;
- (unsigned int)clubRole;
- (void)setPosterChatroomNickname:(id)a0;
- (id)posterChatroomNickname;
- (void)setChatroomId:(id)a0;
- (id)chatroomId;

@end
