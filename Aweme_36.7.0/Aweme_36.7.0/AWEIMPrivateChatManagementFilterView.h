@class NSString, UICollectionView, AWEIMPrivateChatManagementFilterViewModel, UIView;
@protocol AWEIMPrivateChatManagementFilterViewDelegate;

@interface AWEIMPrivateChatManagementFilterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UICollectionView *filterCollectionView;
@property (retain, nonatomic) AWEIMPrivateChatManagementFilterViewModel *viewModel;
@property (weak, nonatomic) id<AWEIMPrivateChatManagementFilterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__addKVO;
- (void)__onMaskViewTapped;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
