@class IESECServiceProxy, FBKVOController, UICollectionViewCell, IESECWinTabObject;
@protocol IESECWinTabService, IESECWinDataService, IESECWinTabCellProtocol, IESECWinSplitService, IESECWinCategoryService, IESECWinPageCardService, IESECWinFeedLinkedService;

@interface IESECWinTabSectionController : IESECWinListKitCellController {
    IESECWinTabObject *_object;
}

@property (retain, nonatomic) FBKVOController *KVOCtrl;
@property (weak, nonatomic) UICollectionViewCell<IESECWinTabCellProtocol> *tabCell;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)configWithCell:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)addObserver;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
