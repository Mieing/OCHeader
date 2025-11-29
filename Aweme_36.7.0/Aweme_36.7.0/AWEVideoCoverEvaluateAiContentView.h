@class AWEVideoCoverEvaluateAiStatusView, NSArray, UICollectionViewFlowLayout, NSString, AWEGradientView, AWEVideoCoverEvaluateAiButtonsView, UICollectionView, AWEVideoCoverEvaluateModel, NSIndexPath;
@protocol AWEEvaluatePanelViewDelegate;

@interface AWEVideoCoverEvaluateAiContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEVideoCoverEvaluateAiStatusView *aiStatusView;
@property (retain, nonatomic) AWEVideoCoverEvaluateAiButtonsView *aiButtonsView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) BOOL isShowInEdit;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isProblemExpanded;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (retain, nonatomic) NSArray *evaluateAiDetailModels;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UICollectionView *contentView;
@property (copy, nonatomic) id /* block */ selectAiCoverBlock;
@property (copy, nonatomic) id /* block */ reloadAiCoverBlock;
@property (copy, nonatomic) id /* block */ applyBlock;
@property (copy, nonatomic) id /* block */ editBlock;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;
@property (weak, nonatomic) id<AWEEvaluatePanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)evaluateAiDetailModelsForEvaluateModel:(id)a0;
+ (double)heightForEvaluateModel:(id)a0;

- (id)commonTrackParams;
- (void)initSubViews;
- (void)updateEvaluateStatus:(id)a0;
- (BOOL)isEditPageEvaluate;
- (void)nextButtonClick;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 evaluateModel:(id)a1;
- (void)setupDefaultSelected;
- (void)panelDismissed:(BOOL)a0;
- (void)reloadAiCoverUIWithStatus:(unsigned long long)a0;
- (void)reloadAiCoverData;
- (void)reloadErrorAiCoverUI;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;

@end
