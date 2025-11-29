@interface UTPageHitHelper : NSObject

+ (void)skipPageForKey:(id)a0;
+ (id)query:(id)a0 forKey:(id)a1;
+ (void)pageAppear:(id)a0 pageName:(id)a1 timestamp:(long long)a2;
+ (BOOL)pageDisAppear:(id)a0 timestamp:(long long)a1;
+ (void)updatePageName:(id)a0 forKey:(id)a1;
+ (void)updatePageProperties:(id)a0 forKey:(id)a1;
+ (void)updatePageUrl:(id)a0 forKey:(id)a1;
+ (void)updatePageStatus:(int)a0 forKey:(id)a1;
+ (BOOL)currentPageIsH5;

@end
