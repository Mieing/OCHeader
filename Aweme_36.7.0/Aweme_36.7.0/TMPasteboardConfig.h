@interface TMPasteboardConfig : NSObject

+ (unsigned long long)unitDisableWithCert:(id)a0;
+ (double)expireTimeWithCert:(id)a0;
+ (id)certConfig:(id)a0;
+ (id)pasteboardCertConfig;
+ (id)patternsWithCert:(id)a0;
+ (BOOL)checkSystemCall;
+ (unsigned long long)checkSystemCallSkipCount;

@end
