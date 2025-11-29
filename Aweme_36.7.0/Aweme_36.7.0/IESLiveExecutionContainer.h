@class IESLiveExecutionSequenceQueue, NSString, IESLiveExecutionModuleRegistry, IESLiveExecutionMessageDispatcher, IESLiveExecutionConfig, IESLivePipelineEngine;
@protocol IESLiveExecutionConfigParserProtocol;

@interface IESLiveExecutionContainer : NSObject

@property (retain, nonatomic) IESLivePipelineEngine *engine;
@property (retain, nonatomic) IESLiveExecutionConfig *config;
@property (retain, nonatomic) id<IESLiveExecutionConfigParserProtocol> configParser;
@property (retain, nonatomic) IESLiveExecutionModuleRegistry *moduleRegistry;
@property (retain, nonatomic) IESLiveExecutionMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) IESLiveExecutionSequenceQueue *sequenceQueue;
@property (readonly, nonatomic) NSString *currentStage;

- (void)didSetAttachingDIContext;
- (void)setupWithConfig:(id)a0;
- (void)executeStage:(id)a0 context:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (id)setupWithConfig:(id)a0 parser:(id)a1;
- (void)registerModule:(id)a0 name:(id)a1;
- (void)sendMessage:(id)a0 toModules:(id)a1 needSynchronously:(BOOL)a2;
- (void)sendMessageSynchronously:(id)a0;
- (void)registerModules:(id)a0;
- (void)executeStage:(id)a0 completion:(id /* block */)a1;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
