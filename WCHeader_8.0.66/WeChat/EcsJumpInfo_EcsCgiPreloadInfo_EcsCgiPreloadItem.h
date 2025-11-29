@class NSString, NSData;

@interface EcsJumpInfo_EcsCgiPreloadInfo_EcsCgiPreloadItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *bypass;
@property (nonatomic) unsigned int level;

+ (void)initialize;

- (void)setLevel:(unsigned int)a0;
- (unsigned int)level;
- (void)setBypass:(id)a0;
- (id)bypass;
- (void)setKey:(id)a0;
- (id)key;

@end
