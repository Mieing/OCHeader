@class NSCache;

@interface IESECStoreLynxResourceManager : NSObject

@property (retain, nonatomic) NSCache *templateDataCache;
@property (retain, nonatomic) NSCache *dynamicComponentCache;

+ (id)sharedInstance;

- (void)preLoadTemplateFromForest:(id)a0;
- (void)appDidReceiveMemoryWarningNotification;
- (void)loadForestMetaDataForURL:(id)a0 completion:(id /* block */)a1;
- (id)syncLoadForestMetaDataForURL:(id)a0;
- (void)asyncLoadForestMetaDataForURL:(id)a0 completion:(id /* block */)a1;
- (id)preloadTemplateData:(id)a0 targetChannel:(id)a1;
- (id)loadFalconMetaDataForURL:(id)a0 enableCache:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
