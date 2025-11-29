@interface AWEKnowledgeStateLogTool : NSObject

+ (void)logInfo:(id)a0 withActionType:(id)a1 sceneInfo:(id)a2 cardInfo:(id)a3 forError:(BOOL)a4;
+ (void)logMessage:(id)a0 forError:(unsigned char)a1;
+ (id)dicWithoutAwemeModelForStateInfo:(id)a0;
+ (void)trackErrorMessage:(id)a0 withParam:(id)a1;
+ (void)trackErrorMessage:(id)a0 withActionType:(id)a1 sceneInfo:(id)a2 cardInfo:(id)a3 param:(id)a4;

@end
