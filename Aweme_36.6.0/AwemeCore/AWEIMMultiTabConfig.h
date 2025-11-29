@interface AWEIMMultiTabConfig : NSObject

+ (id)titleForKey:(id)a0 defaultName:(id)a1;
+ (void)storeListLastStatus:(BOOL)a0 forType:(long long)a1;
+ (id)p_keyForShowLastStatus:(long long)a0;
+ (BOOL)canShowListWithLastStatus:(long long)a0;
+ (id)shared;

@end
