@interface MemberQAUserPagePreviewData : WXPBGeneratedMessage

@property (nonatomic) unsigned int joinedMonths;
@property (nonatomic) unsigned int joinedSeconds;

+ (void)initialize;

- (void)setJoinedSeconds:(unsigned int)a0;
- (unsigned int)joinedSeconds;
- (void)setJoinedMonths:(unsigned int)a0;
- (unsigned int)joinedMonths;

@end
