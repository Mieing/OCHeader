@class NSArray;

@interface ACCEditAdjustDataManager : NSObject

@property (copy, nonatomic) NSArray *itemModels;

+ (id)manager;

- (id)selectedAdjustItem;
- (id)allAdjustItems;
- (void)downloadAdjust:(id)a0 completion:(id /* block */)a1;
- (void)fetchItemsWithCompletion:(id /* block */)a0;
- (id)buildItemsWithResponesModel:(id)a0;
- (void)predownload;
- (void).cxx_destruct;
- (void)clearCache;

@end
