@interface GULKeychainUtils : NSObject

+ (BOOL)setItem:(id)a0 withQuery:(id)a1 error:(id *)a2;
+ (BOOL)removeItemWithQuery:(id)a0 error:(id *)a1;
+ (id)getItemWithQuery:(id)a0 error:(id *)a1;
+ (id)multiplatformQueryWithQuery:(id)a0;
+ (id)keychainErrorWithFunction:(id)a0 status:(int)a1;

@end
