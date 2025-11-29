@class NSString;

@interface iConsole : UIViewController <UITextFieldDelegate, WCActionSheetDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)doNSLog:(id)a0;
+ (void)purelog:(id)a0 arguments:(char *)a1 isCommand:(BOOL)a2;
+ (BOOL)isXcodeConsoleLogEnabled;
+ (BOOL)isNewXCLoggerEnabled;
+ (void)printLog:(int)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 func:(const char *)a4 log:(id)a5;
+ (void)logToConsoleWithColor:(int)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 func:(const char *)a4 message:(id)a5;
+ (void)logWithLevel:(int)a0 module:(const char *)a1 errorCode:(unsigned int)a2 file:(const char *)a3 line:(int)a4 func:(const char *)a5 message:(id)a6;
+ (void)logWithLevel:(int)a0 module:(const char *)a1 errorCode:(unsigned int)a2 file:(const char *)a3 line:(int)a4 func:(const char *)a5 format:(id)a6;
+ (void)logWithLevelAsyncMode:(int)a0 module:(const char *)a1 errorCode:(unsigned int)a2 file:(const char *)a3 line:(int)a4 func:(const char *)a5 message:(id)a6 pid:(unsigned long long)a7 tid:(unsigned long long)a8 cid:(unsigned long long)a9;
+ (void)logToFile:(int)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 func:(const char *)a4 message:(id)a5;
+ (void)logToFileWithAsyncMode:(int)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 func:(const char *)a4 message:(id)a5 pid:(unsigned long long)a6 tid:(unsigned long long)a7;
+ (BOOL)shouldLog:(int)a0;
+ (void)purelog:(id)a0;
+ (BOOL)shouldEnableDebugLog;


@end
