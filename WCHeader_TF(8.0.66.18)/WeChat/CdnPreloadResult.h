@interface CdnPreloadResult : WXPBGeneratedMessage

@property (nonatomic) unsigned int percent;
@property (nonatomic) unsigned long long minsize;
@property (nonatomic) unsigned long long finished;
@property (nonatomic) unsigned long long total;

+ (void)initialize;

@end
