@class NSString, NSArray, IESLiveInteractFeedbackViewModel, IESLiveInteractFeedbackStyleConfig, UILabel, UICollectionView;

@interface IESLiveInteractFeedbackCategoryCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSString *questionTitle;
@property (copy, nonatomic) NSArray *optionArray;
@property (nonatomic) long long type;
@property (weak, nonatomic) IESLiveInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) IESLiveInteractFeedbackStyleConfig *styleConfig;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long scaleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTitle:(id)a0 options:(id)a1 viewModel:(id)a2 type:(long long)a3 styleConfig:(id)a4;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
