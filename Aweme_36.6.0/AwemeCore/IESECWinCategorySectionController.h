@class IESECWinContext, NSString, IESECServiceProxy, UICollectionView, FBKVOController, IESECWinCategoryObject, UIViewController;
@protocol IESECWinCategoryService, IESECWinTabService;

@interface IESECWinCategorySectionController : IGListSectionController <IESECWinContextProtocol, IESECWinCategoryContainerCellDelegate> {
    IESECWinContext *_context;
    IESECWinCategoryObject *_object;
    BOOL _isExtendItem;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) FBKVOController *KVOCtrl;
@property (nonatomic) BOOL isFirstSelected;
@property (nonatomic) BOOL isLiveHotSelected;
@property (weak, nonatomic) UICollectionView *containerView;
@property (weak, nonatomic) UIViewController *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)p_addObserver;
- (double)fitWidth;
- (void)showLiveHotGuideBubble:(id)a0;
- (void)hiddenLiveHotGuideBubble;
- (BOOL)shouldShowLiveHotGuideBubbleView;
- (void)setLiveHotGuideBubbleShowed;
- (id)collectionView:(id)a0 cellAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })containerCollectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)paramsForTrackerWithCategoryModel:(id)a0;
- (void)trackWithEventName:(id)a0 trackParams:(id)a1 once:(id)a2 btmID:(id)a3;
- (BOOL)isExtendItemShow:(id)a0;
- (BOOL)isLiveHot:(id)a0;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)numberOfSections;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
