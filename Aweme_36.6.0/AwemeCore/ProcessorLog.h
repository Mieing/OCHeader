@interface ProcessorLog : NSObject

+ (void)log:(int)a0 point:(const void *)a1 filename:(const char *)a2 func:(const char *)a3 line:(int)a4 msg:(id)a5;
+ (void)setPrintLevel:(int)a0;
+ (void)setCallbackLevel:(int)a0;
+ (void)setErrorCallbackFirstOnly:(int)a0;
+ (void)setCallback:(void /* function */ *)a0;

@end
