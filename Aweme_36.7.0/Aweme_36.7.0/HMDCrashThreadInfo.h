@class NSArray, HMDCrashRegisters, NSString;

@interface HMDCrashThreadInfo : HMDCrashModel

@property (nonatomic) BOOL crashed;
@property (copy, nonatomic) NSArray *stackTrace;
@property (retain, nonatomic) HMDCrashRegisters *registers;
@property (copy, nonatomic) NSArray *frames;
@property (copy, nonatomic) NSString *pthreadName;
@property (copy, nonatomic) NSString *queueName;
@property (copy, nonatomic) NSString *threadName;

- (void)generateFrames:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
