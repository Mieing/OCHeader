@class NSString, NSMutableDictionary;
@protocol IESLiveNewDressResourceCache;

@interface IESLiveNewDressResourceLoader : NSObject <IESLiveNewDressResourceLoadDelegate, IESLiveNewDressResourceLoader>

@property (retain, nonatomic) NSMutableDictionary *processors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveNewDressResourceCache> cache;

- (void)loadProcessor:(id)a0 didLoadDress:(id)a1 duration:(double)a2 error:(id)a3 loadedResource:(id)a4 dressResource:(id)a5;
- (void)addDressResourceLoadProcessorClass:(Class)a0;
- (BOOL)loadDressResourceWithDress:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
