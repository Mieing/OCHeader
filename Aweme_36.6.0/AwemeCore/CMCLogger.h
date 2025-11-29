@interface CMCLogger : NSObject

+ (void)loggerWithLevel:(int)a0 moduleName:(id)a1 subModule:(id)a2 cmcTag:(id)a3 fileName:(id)a4 lineNumber:(int)a5 funcName:(id)a6 message:(id)a7;
+ (id)logger;
+ (void)setLogger:(id)a0;

@end
