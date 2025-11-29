@class NSString;

@interface BDARVTemplateEngine : NSObject <LynxTemplateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)packageVersion;
- (void)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (void)synTemplateData:(id)a0 url:(id)a1;
- (BOOL)exisTemplateForURL:(id)a0 disableCache:(BOOL)a1;
- (id)templateWithURL:(id)a0;
- (void)requestTemplateWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (id)geckoData:(id)a0;
- (void)clearTemplateData;
- (id)_cacheWithURL:(id)a0;
- (id)_innerCacheWithURL:(id)a0;
- (id)init;

@end
