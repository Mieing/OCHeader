@class NSString;

@interface SnsUserInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int snsFlag;
@property (retain, nonatomic) NSString *snsBgimgId;
@property (nonatomic) unsigned long long snsBgobjectId;
@property (nonatomic) unsigned int snsFlagEx;
@property (nonatomic) unsigned int snsPrivacyRecent;

+ (void)initialize;

- (void)setSnsPrivacyRecent:(unsigned int)a0;
- (unsigned int)snsPrivacyRecent;
- (void)setSnsFlagEx:(unsigned int)a0;
- (unsigned int)snsFlagEx;
- (void)setSnsBgobjectId:(unsigned long long)a0;
- (unsigned long long)snsBgobjectId;
- (void)setSnsBgimgId:(id)a0;
- (id)snsBgimgId;
- (void)setSnsFlag:(unsigned int)a0;
- (unsigned int)snsFlag;

@end
