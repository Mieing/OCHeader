@interface CdnBehavior : WXPBGeneratedMessage

@property (nonatomic) unsigned int downloadBehavior;
@property (nonatomic) BOOL isAutostart;
@property (nonatomic) BOOL isSilent;

+ (void)initialize;

@end
