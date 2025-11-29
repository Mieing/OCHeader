@class NSDictionary, NSMutableArray;
@protocol NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol;

@interface NLEProduceKitPipeline : NSObject

@property (retain, nonatomic) NSMutableArray *components;
@property (retain, nonatomic) NSDictionary *result;
@property (retain, nonatomic) id<NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol> currentComponent;
@property (copy, nonatomic) id /* block */ completion;

- (id)pipelineDescription;
- (BOOL)addComponentToLast:(id)a0;
- (void)startWithResultCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getResult;

@end
