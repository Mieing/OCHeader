@interface VeLivePlayerLogManager : NSObject

+ (void)writeLogLevel:(unsigned long long)a0 tag:(id)a1 log:(id)a2;
+ (void)initVolcLog;
+ (void)setLogConfiguration:(id)a0;
+ (void)setLegacyAPILogLevel:(unsigned long long)a0;
+ (void)writeLogLevel:(unsigned long long)a0 tag:(id)a1 fileName:(char *)a2 line:(int)a3 log:(id)a4;
+ (void)writeLogLevel:(unsigned long long)a0 tag:(id)a1 fileName:(char *)a2 line:(int)a3 format:(id)a4;
+ (void)writeLogLevel:(unsigned long long)a0 tag:(id)a1 fileName:(char *)a2 function:(char *)a3 line:(int)a4 format:(id)a5;
+ (void)setLogLevel:(unsigned long long)a0;

@end
