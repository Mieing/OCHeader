@class NSString, NSArray;

@interface HMDWPCapture : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *protectType;
@property (retain, nonatomic) NSString *protectSelector;
@property (retain, nonatomic) NSArray *backtraces;
@property (retain, nonatomic) NSString *log;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double blockTimeInterval;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double inAppTime;
@property (nonatomic, getter=isMainThread) BOOL mainThread;

+ (id)captureCurrentBacktraceWithSkippedDepth:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
