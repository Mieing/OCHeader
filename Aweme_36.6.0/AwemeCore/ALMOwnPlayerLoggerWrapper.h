@class NSString;

@interface ALMOwnPlayerLoggerWrapper : NSObject <TTVideoEngineEventManagerProtocol>

@property (copy, nonatomic) id /* block */ applogBlock;
@property (copy, nonatomic) id /* block */ newApplogBlock;
@property (copy, nonatomic) id /* block */ onePlayCallBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setOnePlayPageInfoCallBlock:(id /* block */)a0;
+ (id)sharedLogger;

- (void)eventManagerDidUpdate:(id)a0;
- (void)setAutoTraceReportOpen:(BOOL)a0;
- (void)eventManagerDidUpdateV2:(id)a0 eventName:(id)a1 params:(id)a2;
- (void)setApplogCallBlock:(id /* block */)a0;
- (void)setNewApplogCallBlock:(id /* block */)a0;
- (void)setUseNewApplog:(BOOL)a0;
- (void)setOnePlayEventCallBlock:(id /* block */)a0;
- (void)didFinishedOnePlayEvent:(id)a0;
- (void)logPreloaderData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
