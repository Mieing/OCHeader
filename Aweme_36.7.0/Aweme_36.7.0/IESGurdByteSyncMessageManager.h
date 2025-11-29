@interface IESGurdByteSyncMessageManager : NSObject

+ (void)registerCustomParamKey:(id)a0 getValueBlock:(id /* block */)a1 forAccessKey:(id)a2;
+ (void)handleMessageDictionary:(id)a0;
+ (void)setupWithType:(long long)a0;
+ (int)businessIdWithType:(long long)a0;
+ (void)recordStatsWithMessageDictionary:(id)a0 shouldHandle:(BOOL)a1;
+ (void)handleCheckUpdateMessage:(id)a0 taskId:(int)a1;
+ (void)handleClearCacheMessage:(id)a0 taskId:(int)a1;

@end
