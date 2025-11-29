@interface CJPayEnvManager : NSObject

+ (id)shared;

- (id)appendParamTo:(id)a0;
- (BOOL)canGetAllAppName;
- (BOOL)canOpenCydia;
- (BOOL)hasJailBreakFiles;
- (BOOL)isJailBreak;
- (BOOL)isSafeEnv;

@end
