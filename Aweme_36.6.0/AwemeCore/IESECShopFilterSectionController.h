@class IESECShopBaseFilterDiffableModel, NSString, IESECShopContext, IESECCollectionViewSectionLayout;
@protocol IESECShopFilterSectionControllerSwitchButtonDelegate;

@interface IESECShopFilterSectionController : IGListSectionController <IESECStoreFilterCollectionViewCellDelegate, IESECCollectionViewSectionLayoutProtocol>

@property (nonatomic) long long scene;
@property (retain, nonatomic) IESECShopContext *context;
@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;
@property (retain, nonatomic) IESECShopBaseFilterDiffableModel *model;
@property (nonatomic) BOOL showSwitchButton;
@property (nonatomic) BOOL showSwitchButtonTitle;
@property (nonatomic) long long productTabStyle;
@property (weak, nonatomic) id<IESECShopFilterSectionControllerSwitchButtonDelegate> delegate;
@property (nonatomic) BOOL needsRemoveCellBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)switchButtonTapped;
- (BOOL)p_showSelectedButton;
- (void)switchButtonShowed;
- (void)selectButtonShowed:(id)a0;
- (void)selectButtonTapped:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)mainScrollView;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
