@class NSArray, AWESelectTemplateDataCache, NSOperationQueue;

@interface AWESelectTemplateDataPreload : NSObject

@property (copy, nonatomic) NSArray *assetArray;
@property (retain, nonatomic) AWESelectTemplateDataCache *dataCache;
@property (retain, nonatomic) NSOperationQueue *preloadTaskQueue;

- (void)cancelPreload;
- (id)initWithAssetArray:(id)a0 dataCache:(id)a1;
- (void)preloadTemplateResourceWithTemplateInfoArray:(id)a0 templateModelArray:(id)a1 isOneClickfilming:(BOOL)a2;
- (void).cxx_destruct;

@end
