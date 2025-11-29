@class EAIEdgeAI;

@interface AWEEdgeAIWrapper : NSObject

@property (retain, nonatomic) EAIEdgeAI *edgeai;

+ (BOOL)shouldInitEdgeAI;
+ (id)getOrCreate:(id)a0;
+ (void)processApplog:(id)a0 params:(id)a1;

- (void)run:(id)a0 callback:(id /* block */)a1;
- (void)invokeCallbackOnMainThread:(id /* block */)a0;
- (void)recordAIResult:(id)a0 output:(id)a1 doAction:(BOOL)a2 creationId:(id)a3 enterFrom:(id)a4 shootWay:(id)a5;
- (void)preloadPropPanelInfoWithAI:(id)a0 enterFrom:(id)a1 shootWay:(id)a2 shouldLoadCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
