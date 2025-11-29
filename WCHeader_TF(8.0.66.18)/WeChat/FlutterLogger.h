@protocol FlutterOutputWriter;

@interface FlutterLogger : NSObject {
    void /* unknown type, empty encoding */ outputWriter;
    void /* unknown type, empty encoding */ logLevel;
}

@property (class, nonatomic, retain) id<FlutterOutputWriter> outputWriter;
@property (class, nonatomic) long long logLevel;

+ (void)logInfo:(id)a0;
+ (void)logImportant:(id)a0;
+ (void)logWarning:(id)a0;
+ (void)logError:(id)a0;
+ (void)logFatal:(id)a0;
+ (void)logDirect:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
