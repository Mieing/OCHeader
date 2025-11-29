@class NSString, NSMutableString;

@interface FBSDKLogger : NSObject

@property (readonly, nonatomic) NSMutableString *internalContents;
@property (copy, nonatomic) NSString *contents;
@property (readonly, nonatomic) unsigned long long loggerSerialNumber;
@property (readonly, copy, nonatomic) NSString *loggingBehavior;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (unsigned long long)generateSerialNumber;
+ (void)singleShotLogEntry:(id)a0 logEntry:(id)a1;
+ (void)singleShotLogEntry:(id)a0 formatString:(id)a1;
+ (void)singleShotLogEntry:(id)a0 timestampTag:(id)a1 formatString:(id)a2;
+ (void)registerCurrentTime:(id)a0 withTag:(id)a1;
+ (void)registerStringToReplace:(id)a0 replaceWith:(id)a1;

- (id)initWithLoggingBehavior:(id)a0;
- (void)appendString:(id)a0;
- (void)appendFormat:(id)a0;
- (void)appendKey:(id)a0 value:(id)a1;
- (void)emitToNSLog;
- (void).cxx_destruct;

@end
