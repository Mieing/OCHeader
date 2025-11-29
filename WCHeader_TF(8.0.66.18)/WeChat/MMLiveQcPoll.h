@class NSString, MMLiveQcPollQuestion;

@interface MMLiveQcPoll : NSObject

@property (retain, nonatomic) NSString *pollId;
@property (retain, nonatomic) NSString *pollTaskId;
@property (retain, nonatomic) MMLiveQcPollQuestion *leadingQuestion;

+ (id)pollWithBackendModel:(id)a0;
+ (void)printDiagnosticsForBackendModel:(id)a0;

- (void).cxx_destruct;

@end
