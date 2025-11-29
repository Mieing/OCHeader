@class NSString;

@interface ResourceKey : WXPBGeneratedMessage

@property (nonatomic) unsigned int keyVersion;
@property (retain, nonatomic) NSString *resKey;

+ (void)initialize;

- (void)setResKey:(id)a0;
- (id)resKey;
- (void)setKeyVersion:(unsigned int)a0;
- (unsigned int)keyVersion;

@end
