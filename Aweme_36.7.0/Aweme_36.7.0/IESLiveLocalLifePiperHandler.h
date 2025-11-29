@class NSString, NSMutableArray;

@interface IESLiveLocalLifePiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (void)unregisterSubscriber;
- (void)registerEventSubscriber;
- (void)registerSubscribes;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
