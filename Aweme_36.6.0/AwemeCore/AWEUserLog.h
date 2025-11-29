@interface AWEUserLog : NSObject

+ (void)socialLogInfoInLine:(int)a0 func:(const char *)a1 format:(id)a2;
+ (void)generalLogErrorInLine:(int)a0 func:(const char *)a1 format:(id)a2;
+ (void)friendLogWarnInLine:(int)a0 func:(const char *)a1 format:(id)a2;

@end
