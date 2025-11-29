@class NSOperationQueue, NSString;

@interface ASSLogger : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSString *loggerInfo;

+ (id)sharedInstance;

- (void)uploadLog;
- (void)internal_addLog:(id)a0;
- (void)uploadLogCertified;
- (void)initializeWithArgs:(id)a0;
- (id)limitedLengthString:(id)a0;
- (void)addLogWithMessage:(id)a0;
- (id)getCurrentFileName:(id)a0;
- (void)addLogWithMessage:(id)a0 withFileName:(id)a1;
- (id)generateMessage:(id)a0;
- (id)generateJsonMessage:(id)a0;
- (void).cxx_destruct;

@end
