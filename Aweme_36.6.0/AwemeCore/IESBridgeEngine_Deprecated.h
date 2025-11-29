@class NSArray, NSMutableArray;
@protocol IESBridgeExecutor, IESBridgeEngineDelegate_Deprecated;

@interface IESBridgeEngine_Deprecated : NSObject

@property (retain, nonatomic) NSMutableArray *internalMethods;
@property (weak, nonatomic) id<IESBridgeExecutor> executor;
@property (weak, nonatomic) id<IESBridgeEngineDelegate_Deprecated> delegate;
@property (readonly, copy, nonatomic) NSArray *methods;

+ (void)addGlobalMethod:(id)a0;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)executeMethod:(id)a0 withMessage:(id)a1;
- (void)removeAllMethods;
- (void)executeMethodsWithMessage:(id)a0;
- (void)sendCallback:(id)a0 params:(id)a1;
- (void)sendBridgeMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addMethod:(id)a0;

@end
