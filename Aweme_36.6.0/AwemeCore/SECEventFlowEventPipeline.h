@protocol SECEventFlowEventLogger;

@interface SECEventFlowEventPipeline : NSObject

@property (retain, nonatomic) id<SECEventFlowEventLogger> logger;
@property (nonatomic) BOOL externalEventEnabled;

+ (id)shared;

- (void)submitExternalEvent:(id)a0 params:(id)a1 source:(id)a2 additionalParams:(id)a3;
- (id)convertToStandardEvent:(id)a0 params:(id)a1 source:(id)a2;
- (void)tagStandardEvent:(id)a0;
- (BOOL)shouldEventLogged:(id)a0;
- (void)trimEvent:(id)a0;
- (void)logWithStandardEvent:(id)a0;
- (BOOL)shouldSubmitToEventFlow:(id)a0;
- (void)submitEvent:(id)a0 params:(id)a1 source:(id)a2;
- (void).cxx_destruct;

@end
