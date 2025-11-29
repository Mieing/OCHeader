@class NSArray, NSMutableArray;

@interface AWEDPUndertakeEventListenModule : NSObject

@property (retain, nonatomic) NSMutableArray *eventListenerModelArray;
@property (nonatomic) BOOL enableHook;
@property (retain, nonatomic) NSArray *hookEventList;

+ (id)sharedInstance;

- (BOOL)undertakeHookEventV3:(id)a0 params:(id)a1;
- (void)registerEventListenerOnce:(id)a0 needTrigger:(id /* block */)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
