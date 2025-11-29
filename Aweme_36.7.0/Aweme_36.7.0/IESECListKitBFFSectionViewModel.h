@class NSString, IESECListKitSectionModel, IESECListKitBFFContext;
@protocol IESECListKitSectionViewModelDelegate, IESECListKitCellModelProtocol;

@interface IESECListKitBFFSectionViewModel : IESECListKitBaseListSectionViewModel <IESECListKitCellModelDelegate>

@property (retain, nonatomic) IESECListKitSectionModel *sectionModel;
@property (retain, nonatomic) IESECListKitBFFContext *context;
@property (weak, nonatomic) id<IESECListKitSectionViewModelDelegate> delegate;
@property (retain, nonatomic) id<IESECListKitCellModelProtocol> headerModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (copy, nonatomic) NSString *currentTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsWithItemModels:(id)a0 sectionData:(id)a1 context:(id)a2 cellModelDelegate:(id)a3;
+ (double)widthForItem:(id)a0 sectionData:(id)a1 context:(id)a2;
+ (id)viewModelWithSectionData:(id)a0 context:(id)a1 delegate:(id)a2;

- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)appendModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)removeModels:(id)a0 animated:(BOOL)a1;
- (void)updateWithItemModel:(id)a0;
- (void)lynxCardModelDidCreate:(id)a0 itemModel:(id)a1 itemConfig:(id)a2 index:(long long)a3;
- (void)lynxCardModel:(id)a0 didReceiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 itemModel:(id)a3 index:(long long)a4 updateRectBlock:(id /* block */)a5;
- (void)updateLynxDataWithItemModel:(id)a0;
- (void)removeModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2 completion:(id /* block */)a3;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 sync:(BOOL)a3 completion:(id /* block */)a4;
- (void)appendItemModels:(id)a0;
- (void)updateItemsIndex;
- (unsigned long long)sectionForCellModel:(id)a0;
- (unsigned long long)indexForCellModel:(id)a0;
- (void)appendSectionData:(id)a0;
- (void)replaceItemModels:(id)a0;
- (void)removeItemModels:(id)a0;
- (void).cxx_destruct;

@end
