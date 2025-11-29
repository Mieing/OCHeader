@interface BypSyncKeyPair : WXPBGeneratedMessage

@property (nonatomic) unsigned int synckeyId;
@property (nonatomic) unsigned long long synckeyValue;

+ (void)initialize;

- (void)setSynckeyValue:(unsigned long long)a0;
- (unsigned long long)synckeyValue;
- (void)setSynckeyId:(unsigned int)a0;
- (unsigned int)synckeyId;

@end
