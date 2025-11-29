@class NSString;
@protocol RxInjector;

@interface __RTVVideoPreloader : NSObject <RTVVideoPreloader>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 tag:(id)a6;
- (id)getTaskCacheVideoID:(id)a0 andVideoURL:(id)a1 urlKey:(id)a2;
- (void).cxx_destruct;

@end
