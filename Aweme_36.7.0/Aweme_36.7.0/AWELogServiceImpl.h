@class NSString;

@interface AWELogServiceImpl : NSObject <AWELogService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logStringWithLevel:(unsigned long long)a0 module:(id)a1 subModule:(id)a2 fileName:(id)a3 lineNumber:(int)a4 funcName:(id)a5 message:(id)a6;
- (void)logStringWithLevel:(unsigned long long)a0 module:(id)a1 subModule:(id)a2 fileName:(id)a3 lineNumber:(int)a4 funcName:(id)a5 message:(id)a6 instanceName:(id)a7;
- (void)logHugeStringWithLevel:(unsigned long long)a0 module:(id)a1 subModule:(id)a2 fileName:(id)a3 lineNumber:(int)a4 funcName:(id)a5 message:(id)a6;
- (void)logImportantStringWithLevel:(unsigned long long)a0 module:(id)a1 subModule:(id)a2 fileName:(id)a3 lineNumber:(int)a4 funcName:(id)a5 message:(id)a6;
- (void)logHugeStringWithLevel:(unsigned long long)a0 module:(id)a1 subModule:(id)a2 fileName:(id)a3 lineNumber:(int)a4 funcName:(id)a5 message:(id)a6 instanceName:(id)a7;

@end
