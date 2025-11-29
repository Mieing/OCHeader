@class NSString, NSMutableDictionary;

@interface AWESearchAIRequestInterruptor : NSObject

@property (retain, nonatomic) NSMutableDictionary *latestRequestParams;
@property (copy, nonatomic) NSString *urlPath;

- (id)stringFromInterruptReason:(unsigned long long)a0;
- (void)injectParametersForNewRequest:(id)a0;
- (void)interruptCurrentRequestWithReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
