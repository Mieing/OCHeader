@class NSString, MJImageComposingViewModel, UICollectionView, UILabel, UIView, MMUIButton;
@protocol MJImageTemplatePanelDelegate;

@interface MJImageTemplatePanel : MJImagePanel <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) MJImageComposingViewModel *viewModel;
@property (retain, nonatomic) UIView *topbar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (retain, nonatomic) UICollectionView *templateCollectionView;
@property (weak, nonatomic) id<MJImageTemplatePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_fetchTemplateItems;
- (void)doneButtonDidTap;
- (void).cxx_destruct;

@end
