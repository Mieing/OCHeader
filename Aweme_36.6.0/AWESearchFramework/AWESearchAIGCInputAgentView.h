@class AWESearchAIGCInputAgentViewModel, NSString, UICollectionView;
@protocol AWESearchAIGCInputAgentViewDelegate;

@interface AWESearchAIGCInputAgentView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWESearchAIGCInputAgentViewModelDelegate, AWESearchAIGCInputAgentAction>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWESearchAIGCInputAgentViewModel *viewModel;
@property (weak, nonatomic) id<AWESearchAIGCInputAgentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeChange;
- (Class)cellClassForAgentModel:(id)a0;
- (BOOL)inputAgentIsEmpty;
- (void)inputAgentRefreshWithVideoID:(id)a0 conversationID:(id)a1;
- (void)inputAgentRefreshLocalData;
- (void)agentViewModel:(id)a0 updatedWithOldAgentList:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)setupUI;

@end
