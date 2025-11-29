@class NSDictionary;

@interface CJPayAIEngineRunTaskParams : NSObject

@property (copy, nonatomic) NSDictionary *inputParams;
@property (nonatomic) BOOL async;
@property (nonatomic) double pendingTimeout;

- (void).cxx_destruct;

@end
