@interface SAMIStreamTTSUtils : NSObject

+ (void)samiStopProcess:(id)a0;
+ (void)samiDestroyHandle:(id)a0;
+ (void)changeSpeechRate:(id)a0 rate:(float)a1;
+ (id)fetchUnderRunCountData:(id)a0;
+ (id)samiCreateHandleWithParameter:(id)a0;

@end
