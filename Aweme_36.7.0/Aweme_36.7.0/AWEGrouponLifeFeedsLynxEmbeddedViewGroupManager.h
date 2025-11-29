@class NSObject, BDXThreadSafeDictionary;
@protocol OS_dispatch_semaphore;

@interface AWEGrouponLifeFeedsLynxEmbeddedViewGroupManager : NSObject

@property (retain, nonatomic) BDXThreadSafeDictionary *embeddedViewMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)initLynxEmbeddedViewWithLynxViewGroup:(id)a0 threadStrategy:(id)a1 builderBlock:(id /* block */)a2;
+ (id)sharedInstance;

- (id)commonProps;
- (id)getLynxViewGroupEngineWithConfig:(id)a0;
- (id)getLynxViewGroupEngineWithURL:(id)a0 lynxTemplateBundle:(id)a1;
- (id)createLynxViewGroupEngineWithURL:(id)a0 lynxTemplateBundle:(id)a1;
- (id)getForestLynxResourceProviderWithUrl:(id)a0;
- (id)generateGlobalProps:(id)a0;
- (void)removeLynxViewGroupEngineWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
