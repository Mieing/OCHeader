@class NSString;

@interface WALogProxy : NSObject <IWALogService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLog:(int)a0;
+ (BOOL)shouldEnableDebugLog;
+ (void)logWithLevel:(int)a0 module:(const char *)a1 errorCode:(unsigned int)a2 file:(const char *)a3 line:(int)a4 func:(const char *)a5 message:(id)a6;
+ (void)logWithLevel:(int)a0 module:(const char *)a1 errorCode:(unsigned int)a2 file:(const char *)a3 line:(int)a4 func:(const char *)a5 format:(id)a6;
+ (void)silentCrash:(id)a0;
+ (void)customDump:(id)a0;
+ (void)asyncCustomDump:(id)a0;


@end
