@class NSString;

@interface FinderLiveAliasSync : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned int spamFlag;
@property (nonatomic) unsigned long long deleteTime;

+ (void)initialize;

- (void)setDeleteTime:(unsigned long long)a0;
- (unsigned long long)deleteTime;
- (void)setSpamFlag:(unsigned int)a0;
- (unsigned int)spamFlag;
- (void)setHeadImgUrl:(id)a0;
- (id)headImgUrl;
- (void)setUpdateTime:(unsigned long long)a0;
- (unsigned long long)updateTime;
- (void)setNickname:(id)a0;
- (id)nickname;

@end
