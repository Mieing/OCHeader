@class WAJSCoreService;

@interface WAJSThread : NSObject <IWAJSThread>

@property (weak, nonatomic) WAJSCoreService *service;
@property (readonly, nonatomic) BOOL isDebuging;

- (id)initWithService:(id)a0;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;

@end
