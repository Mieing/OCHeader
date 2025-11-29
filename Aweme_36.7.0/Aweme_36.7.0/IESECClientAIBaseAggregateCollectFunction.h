@class NSString;
@protocol IESECClientAIAggregateControllerProtocol;

@interface IESECClientAIBaseAggregateCollectFunction : NSObject <IESECClientAICustomCollectFunctionProtocol>

@property (copy, nonatomic) NSString *functionKey;
@property (copy, nonatomic) id /* block */ function;
@property (retain, nonatomic) id<IESECClientAIAggregateControllerProtocol> controller;

- (id)invokeWithContext:(id)a0 stream:(id)a1 params:(id)a2;
- (void).cxx_destruct;

@end
