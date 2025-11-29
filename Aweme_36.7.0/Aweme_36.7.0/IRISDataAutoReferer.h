@class IRISDataUserFlow;

@interface IRISDataAutoReferer : NSObject

@property (weak, nonatomic) IRISDataUserFlow *flowModel;

+ (id)flowModel;
+ (id)sharedInstance;

- (BOOL)startWithModel:(id)a0;
- (void).cxx_destruct;

@end
