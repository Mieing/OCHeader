@class UIView, IESLiveRefactGiftPanelViewBuilder, NSString, IESLiveRefactGiftPanelSectionViewModel, NSMutableDictionary, IESLiveGiftPanelSearchView, IESLiveGiftPanelViewModel, IESLiveGiftListCollectionView;
@protocol IESLiveSubscription, IESLiveRefactGiftPanelSectionViewProtocol;

@interface IESLiveGiftSearchPanelView : UIView <IESLiveRefactGiftPanelEventAction, IESLiveGiftListCollectionViewDelgate>

@property (retain, nonatomic) IESLiveGiftPanelViewModel *viewModel;
@property (retain, nonatomic) IESLiveGiftPanelSearchView *searchView;
@property (retain, nonatomic) IESLiveGiftListCollectionView *giftListView;
@property (retain, nonatomic) IESLiveRefactGiftPanelViewBuilder *viewBuilder;
@property (retain, nonatomic) NSMutableDictionary *sectionViewsMutableDict;
@property (retain, nonatomic) UIView<IESLiveRefactGiftPanelSectionViewProtocol> *operationView;
@property (retain, nonatomic) id<IESLiveSubscription> opreationReadyDisposiable;
@property (retain, nonatomic) id<IESLiveSubscription> opreationChangeDisposiable;
@property (retain, nonatomic) IESLiveRefactGiftPanelSectionViewModel *sectionViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOperationExpand;

- (void)didSetAttachingDIContext;
- (void)sendGiftFromCell;
- (void)giftListDidSelectItemAtIndexPath:(id)a0;
- (void)giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)createRefactViewBuilder;
- (void)refactSectionViewWillAppear:(id)a0 superView:(id)a1 sectionViewModel:(id)a2;
- (void)refactSectionViewDidAppear:(id)a0 superView:(id)a1 sectionViewModel:(id)a2;
- (void)refactSectionViewWillDisappear:(id)a0 superView:(id)a1 sectionViewModel:(id)a2;
- (void)refactSectionViewDidDisappear:(id)a0 superView:(id)a1 sectionViewModel:(id)a2;
- (void)reloadSectionViewsWith:(id)a0;
- (void)giftOperationChangeToExpand:(BOOL)a0;
- (void)searchOperationViewShow;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
