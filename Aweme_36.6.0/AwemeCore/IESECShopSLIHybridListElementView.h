@class IESECListKitListModel, NSString, IESECListKitBFFViewController, IESECShopProductsHybridContext, UIViewController;
@protocol IESECShopSLICardEventDelegate;

@interface IESECShopSLIHybridListElementView : IESECSliceXBaseContentElementView <IESECListKitBFFViewControllerDelegate> {
    IESECListKitListModel *_hybridListToUpdate;
    NSString *_hybridListLoadType;
}

@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) IESECShopProductsHybridContext *hybridContext;
@property (weak, nonatomic) id<IESECShopSLICardEventDelegate> eventDelegate;
@property (copy, nonatomic) NSString *listEnvID;
@property (retain, nonatomic) IESECListKitListModel *hybridListModel;
@property (retain, nonatomic) IESECListKitBFFViewController *hybridListVC;
@property (nonatomic) BOOL footerHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getHybridListModel;
- (id)listKitEnvIdentifier;
- (void)cellWillDisplay:(id)a0 source:(unsigned long long)a1 section:(long long)a2 index:(long long)a3 isFirstShow:(BOOL)a4 lynxUrl:(id)a5;
- (void)cellWillEndDisplay:(id)a0 source:(unsigned long long)a1 section:(long long)a2 index:(long long)a3;
- (void)cellDidSelect:(id)a0 section:(long long)a1 index:(long long)a2;
- (void)listViewShouldLoadMore;
- (BOOL)setupElementView;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (id)sliceKey;
- (void)configureCardControllers;
- (void)updateWithListModel:(id)a0 loadType:(id)a1;
- (void)updateSliceConfigs:(id)a0;
- (void)footerEndRefreshing;
- (void)refreshHybridList:(id)a0;
- (void)loadMoreHybridList:(id)a0;
- (void).cxx_destruct;
- (void)setFooterVisible:(BOOL)a0;
- (id)collectionView;

@end
