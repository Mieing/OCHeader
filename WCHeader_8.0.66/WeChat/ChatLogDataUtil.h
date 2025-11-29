@interface ChatLogDataUtil : NSObject

+ (id)ChatLogDataStatPath;
+ (id)LoadDataFromFile:(id)a0 forClass:(Class)a1;
+ (BOOL)SaveDataToFile:(id)a0 withObject:(id)a1 isPrintDescription:(BOOL)a2;

@end
