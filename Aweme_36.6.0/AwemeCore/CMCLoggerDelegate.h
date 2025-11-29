@class NSString;

@interface CMCLoggerDelegate : HTSService <CMCLoggerDelegate, HTSService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)aweLevelWithLevel:(int)a0;

- (void)loggerWithLevel:(int)a0 moduleName:(id)a1 subModule:(id)a2 fileName:(id)a3 lineNumber:(int)a4 funcName:(id)a5 message:(id)a6;

@end
