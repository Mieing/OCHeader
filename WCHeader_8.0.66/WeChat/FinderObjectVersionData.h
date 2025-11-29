@interface FinderObjectVersionData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long dataVersion;
@property (nonatomic) BOOL overwrite;

+ (void)initialize;

- (void)setOverwrite:(BOOL)a0;
- (BOOL)overwrite;
- (void)setDataVersion:(unsigned long long)a0;
- (unsigned long long)dataVersion;

@end
