@class NSString, NLEModel_OC, NSMutableDictionary;
@protocol NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol;

@interface NLEProduceKitPickFrameComponent : NSObject <NLEProduceKitComponentPrivateProtocol, NLEProduceKitComponentProtocol>

@property (retain, nonatomic) NLEModel_OC *model;
@property (retain, nonatomic) id<NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol> nextComponent;
@property (retain, nonatomic) NSMutableDictionary *input;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL passThroughInput;

- (void)inputToProperty;
- (id)checkInput;
- (void)startWithResultBlock:(id /* block */)a0;
- (void)start:(id)a0 withResultBlock:(id /* block */)a1;
- (void)addInputWithModel:(id)a0;
- (void).cxx_destruct;
- (void)work;
- (id)init;
- (void)start;
- (id)componentDescription;

@end
