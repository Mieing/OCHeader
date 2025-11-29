@interface WeVisModelReporter : NSObject

+ (void)reportWithInfo:(id)a0 invalidModelInfo:(id)a1 action:(int)a2 cgiModelInfo:(id)a3;
+ (void)reportCgiFail;
+ (void)reportSysMsgCgi;
+ (void)reportAction:(int)a0 type:(int)a1 subtyp:(int)a2;
+ (void)reportModelInvalid:(id)a0;
+ (void)reportModelInfo:(id)a0 invalidModelInfo:(id)a1 cgiModelInfo:(id)a2;
+ (void)reportDeleteUnusedFile:(id)a0;

@end
