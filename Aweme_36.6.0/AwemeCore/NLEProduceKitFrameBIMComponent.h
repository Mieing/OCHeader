@class VEAIMomentAlgorithm, NSMutableDictionary, NSString, NSMutableArray, VEAIMomentBIMConfig;
@protocol NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol;

@interface NLEProduceKitFrameBIMComponent : NSObject <NLEProduceKitComponentPrivateProtocol, NLEProduceKitComponentProtocol>

@property (retain, nonatomic) VEAIMomentAlgorithm *algo;
@property (retain, nonatomic) VEAIMomentBIMConfig *config;
@property (retain, nonatomic) NSMutableArray *imgs;
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
- (id)initWithVEAIMomentBIMConfig:(id)a0;
- (void)addInputWithUIImage:(id)a0;
- (void)addInputWithUIImageArray:(id)a0;
- (void).cxx_destruct;
- (void)work;
- (void)addInput:(id)a0;
- (void)start;
- (id)componentDescription;
- (void)setResultBlock:(id /* block */)a0;

@end
