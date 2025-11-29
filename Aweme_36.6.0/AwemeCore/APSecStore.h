@interface APSecStore : NSObject

+ (id)loadKey:(id)a0 error:(id *)a1;
+ (BOOL)saveKey:(id)a0 Value:(id)a1 error:(id *)a2;
+ (BOOL)deleteKey:(id)a0 error:(id *)a1;

@end
