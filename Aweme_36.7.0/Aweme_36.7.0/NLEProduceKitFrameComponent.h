@class NSArray, NLEProduceKitFrameConfig, NLEInterface_OC, NSMutableDictionary, NSString;
@protocol NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol;

@interface NLEProduceKitFrameComponent : NSObject <NLEProduceKitComponentPrivateProtocol, NLEProduceKitComponentProtocol>

@property (retain, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) NLEProduceKitFrameConfig *config;
@property (retain, nonatomic) NSArray *timeArray;
@property (nonatomic) BOOL isRough;
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
- (id)initWithNLE:(id)a0 config:(id)a1;
- (void)addInputWithTimes:(id)a0;
- (int)indexOfElement:(double)a0 InArray:(id)a1;
- (void).cxx_destruct;
- (void)work;
- (void)addInput:(id)a0;
- (void)start;
- (id)componentDescription;
- (void)setResultBlock:(id /* block */)a0;

@end
