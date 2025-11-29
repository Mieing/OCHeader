@class NSString;

@interface TIMXDebugOptions : MTLModel <TIMXInstanceScopeSingleton>

@property (nonatomic) BOOL skipWebSocketSend;
@property (nonatomic) BOOL pullerTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)a0;

@end
