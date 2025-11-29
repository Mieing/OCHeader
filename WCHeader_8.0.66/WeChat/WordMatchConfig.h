@interface WordMatchConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int disableMatch;
@property (nonatomic) unsigned int minMatchLen;
@property (nonatomic) unsigned int maxMatchLen;

+ (void)initialize;

@end
