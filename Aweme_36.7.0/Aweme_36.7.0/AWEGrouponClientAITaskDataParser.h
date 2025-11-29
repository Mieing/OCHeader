@interface AWEGrouponClientAITaskDataParser : NSObject

+ (void)parseTaskDataWithMessage:(id)a0 sceneKey:(id)a1 block:(id /* block */)a2;
+ (id)getFinalDataWithTaskInfo:(id)a0 taskData:(id)a1 extraData:(id)a2;
+ (id)getValueWithDataType:(id)a0 source:(id)a1 key:(id)a2;

@end
