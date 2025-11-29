@interface EAIUitls : NSObject

+ (BOOL)isLocalModelReady:(id)a0 fileDir:(id)a1;
+ (id)parseToArray:(id)a0 clazz:(Class)a1;
+ (id)parseToObject:(id)a0 clazz:(Class)a1;
+ (id)objectToString:(id)a0;
+ (id)fileMD5:(id)a0;
+ (BOOL)saveConfig:(id)a0 withPath:(id)a1;
+ (id)loadConfig:(id)a0;
+ (BOOL)saveConfig:(id)a0 withDir:(id)a1;
+ (id)loadConfigApplyNew:(BOOL)a0 fileDir:(id)a1;

@end
