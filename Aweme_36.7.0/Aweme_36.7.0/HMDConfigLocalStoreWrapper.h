@interface HMDConfigLocalStoreWrapper : NSObject

+ (id)localConfigForClass:(Class)a0;
+ (void)eraseLocalStorage;
+ (id)localConfigDataForKey:(id)a0;
+ (void)removeConfigDataForKey:(id)a0;
+ (void)localStoreData:(id)a0 forKey:(id)a1;

@end
