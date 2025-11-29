@class NSString;

@interface GetA8KeyLiteDomainInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *domain;
@property (nonatomic) unsigned int controlBits;
@property (nonatomic) unsigned int expire;
@property (nonatomic) unsigned long long lastModifyTime;

+ (void)initialize;

@end
