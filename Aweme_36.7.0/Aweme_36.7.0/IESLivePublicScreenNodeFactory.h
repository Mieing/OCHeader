@class IESLivePublicScreenProcessNodeThread, IESLivePublicScreenCommonMessageParser, IESLiveThreadSafeDictionary, NSObject;
@protocol IESLiveWebImageService, OS_dispatch_queue;

@interface IESLivePublicScreenNodeFactory : NSObject

@property (retain, nonatomic) IESLiveThreadSafeDictionary *nodeStrategyMap;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (retain, nonatomic) IESLivePublicScreenProcessNodeThread *processNodeThread;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processNodeQueue;
@property (copy, nonatomic) id /* block */ setupNodeStrategyBlock;
@property (nonatomic) BOOL enable_thread_fix;

- (void)executeProcessNodeTask:(id)a0;
- (id)initWithPublicScreenID:(id)a0 messageParser:(id)a1 setupNodeStrategyBlock:(id /* block */)a2 diContext:(id)a3;
- (void)executeProcessNodeTaskAsync:(id)a0;
- (id)p_createNodeWith:(id)a0;
- (void)p_updateNodeSizeWith:(id)a0;
- (void)p_resetMessageNodeWith:(id)a0;
- (void)p_updateNodeDiggInfoWith:(id)a0;
- (id)getNodeStrategyWithTask:(id)a0;
- (BOOL)needLoadResourceWithNodeStrategy:(id)a0 downloadCompletion:(id /* block */)a1;
- (id)messageNodeStrategyWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
