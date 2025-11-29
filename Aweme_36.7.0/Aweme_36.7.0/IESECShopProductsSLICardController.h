@class NSString, IESECListKitListUpdater, IESECShopMonitorAsyncRenderItem, IESECListKitItemDataModel, NSMutableDictionary, NSDictionary, IESECShopProductsHybridContext, IESECServiceProxy, UICollectionViewCell;
@protocol IESECShopSLIService, IESECShopPageContextV2;

@interface IESECShopProductsSLICardController : NSObject <IESECShopSLICardController, IESECListKitCellControllerProtocol> {
    double _itemWidth;
    NSMutableDictionary *_cellHeightCache;
    NSDictionary *_mergedDataSource;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopSLIService> *SLIService;
@property (readonly, nonatomic) id<IESECShopPageContextV2> cv2;
@property (readonly, nonatomic) IESECShopProductsHybridContext *context;
@property (readonly, nonatomic) IESECShopMonitorAsyncRenderItem *asyncRenderItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (id)sliceUniqueID;
- (void)sliceXContentView:(id)a0 didFinishLoad:(BOOL)a1;
- (void)sliceXContentView:(id)a0 didLoadFail:(id)a1;
- (void)sliceXContentView:(id)a0 didUpdateViewSize:(struct CGSize { double x0; double x1; })a1;
- (void)configCell;
- (void)updateLayoutAndCanBeCanceled;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)didEndDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (unsigned long long)currentListStyle;
- (id)dataSourceForItemData:(id)a0;
- (void)bindSliceDataSource:(BOOL)a0;
- (id)getElementView:(id)a0 error:(id *)a1;
- (id)templateForItemData:(id)a0;
- (double)getCacheCellHeight;
- (BOOL)shouldUpdateSliceXContentView:(id)a0 withSliceTemplate:(id)a1;
- (void)bindSliceDataSource:(BOOL)a0 forSliceXView:(id)a1;
- (void)setCacheCellHeight:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;

@end
