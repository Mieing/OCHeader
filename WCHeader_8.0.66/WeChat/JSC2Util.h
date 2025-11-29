@interface JSC2Util : NSObject

+ (void)setEnable:(BOOL)a0;
+ (BOOL)isEnable;
+ (unsigned int)engineOptions;
+ (void)setOptions:(unsigned int)a0;
+ (void)addOptions:(unsigned int)a0;
+ (void)setBytecodeEnable:(BOOL)a0;
+ (BOOL)isBytecodeEnable;
+ (void)setCEvaluateJSScriptEnable:(BOOL)a0;
+ (BOOL)isCEvaluateJSScriptEnable;
+ (void)setUseAutorelease:(BOOL)a0;
+ (void)hook;
+ (void)setByteCodeDirPath:(id)a0 forJSVM:(id)a1;
+ (id)byteCodeDirPathForJSVM:(id)a0;
+ (void)setByteCodeDirPath:(id)a0 forJSContext:(id)a1;
+ (id)byteCodeDirPathForJSContext:(id)a0;
+ (void)setByteCodeSwitch:(unsigned long long)a0 forJSContext:(id)a1;
+ (unsigned long long)byteCodeSwitchTypeForJSContext:(id)a0;
+ (void)setByteCodeSwitch:(unsigned long long)a0 forJSVM:(id)a1;
+ (unsigned long long)byteCodeSwitchTypeForJSVM:(id)a0;
+ (void)reportWithKey:(unsigned long long)a0;
+ (void)clearAllCodeCache;
+ (void)codeCacheSource:(id)a0 setByteCodeSwitchType:(unsigned long long)a1;
+ (unsigned long long)codeCacheSourceByteCodeSwitchType:(id)a0;
+ (void)codeCacheSource:(id)a0 setByteCodeDirPath:(id)a1;
+ (id)codeCacheSourceByteCodeDirPath:(id)a0;
+ (id)codeCacheSourceByteCodeIdentifier:(id)a0;
+ (void)codeCacheSource:(id)a0 setByteCodeIdentifier:(id)a1;
+ (id)codeCacheSourceCodeCacheDetail:(id)a0;
+ (void)codeCacheSource:(id)a0 setCodeCacheDetail:(id)a1;
+ (BOOL)isScriptLengthCanBeCached:(id)a0;
+ (BOOL)isScriptLengthCanBeCachedWithLength:(unsigned int)a0;

@end
