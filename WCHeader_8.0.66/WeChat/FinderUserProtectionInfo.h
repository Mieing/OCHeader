@interface FinderUserProtectionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long protectionExpireTime;
@property (nonatomic) unsigned int protectionMode;

+ (void)initialize;

- (void)setProtectionMode:(unsigned int)a0;
- (unsigned int)protectionMode;
- (void)setProtectionExpireTime:(unsigned long long)a0;
- (unsigned long long)protectionExpireTime;

@end
