@interface TVLTool : NSObject

+ (void)swizzleForClass:(Class)a0 oriSEL:(SEL)a1 fromClass:(Class)a2 newSEL:(SEL)a3;
+ (void)reportALog:(unsigned long long)a0 tag:(id)a1 message:(id)a2;
+ (id)parseStreamNameFromURL:(id)a0;
+ (id)parse_SEI:(id)a0;
+ (void)setALogCallback:(id /* block */)a0;
+ (void)setShouldDynamicChangeLogCallbackValue:(BOOL)a0;
+ (long long)sumIntArray:(id)a0;
+ (BOOL)checkLicenseFeature:(long long)a0;
+ (void)setLogLevel:(unsigned long long)a0;
+ (void)setShouldLogToConsole:(BOOL)a0;

@end
