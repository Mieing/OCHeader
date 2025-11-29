@class NSString;

@interface ACCNLELogger : NSObject <NLELoggerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logger:(id)a0 log:(id)a1 level:(long long)a2 file:(id)a3 function:(id)a4 line:(int)a5 message:(id)a6;
- (struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })p_createLoggerInfoWithFilename:(const char *)a0 tag:(const char *)a1 line:(int)a2 functionName:(const char *)a3;

@end
