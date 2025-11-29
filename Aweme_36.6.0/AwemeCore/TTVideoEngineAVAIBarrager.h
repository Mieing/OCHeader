@class NSString, TTVideoEngine;
@protocol TTVideoEngineAIBarrageDelegate;

@interface TTVideoEngineAVAIBarrager : NSObject <TTAVPlayerMaskInfoInterface>

@property (weak, nonatomic) id<TTVideoEngineAIBarrageDelegate> delegate;
@property (weak, nonatomic) TTVideoEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
