@interface IESECLynxCardUtils : NSObject

+ (id)prefixWithURL:(id)a0;
+ (id)accessKeyWithURL:(id)a0;
+ (id)defaultGlobalProps;
+ (id)accessKeyWithSchema:(id)a0;
+ (id)prefixWithSchema:(id)a0;
+ (id)createViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
+ (void)enableAnimaXWith:(id)a0;
+ (id)hybridContextWithModel:(id)a0;
+ (BOOL)enableLynxCardMonitor;
+ (id)resolveHybridSchema:(id)a0;
+ (id)defaultPrefixToAK;
+ (id)lynxGroupsForKey:(id)a0;
+ (void)setWeakGroup:(id)a0 forKey:(id)a1;
+ (id)urlFromSchema:(id)a0;
+ (id)getPrefixAndAKWithURL:(id)a0;
+ (void)initialize;

@end
