@interface LottieAdapterFactory : NSObject

+ (id)createAdapter;
+ (void)registerCreator:(id)a0 forType:(unsigned long long)a1;
+ (id)createAdapterWithAnimationNamed:(id)a0;
+ (id)createAdapterWithAnimationNamed:(id)a0 inBundle:(id)a1;
+ (id)createAdapterWithJSON:(id)a0;
+ (id)createAdapterWithJSON:(id)a0 inBundle:(id)a1;
+ (id)createAdapterWithFilePath:(id)a0;
+ (id)createAdapterWithURL:(id)a0;
+ (id)creatorForType:(unsigned long long)a0;
+ (void)unregisterCreatorForType:(unsigned long long)a0;
+ (void)initialize;
+ (void)setDefaultType:(unsigned long long)a0;

@end
