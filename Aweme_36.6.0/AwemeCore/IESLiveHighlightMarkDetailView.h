@class IESLiveWebpLoadingView, UIView, NSString, UIImageView, IESLiveHighlightMarkDetailViewModel, UICollectionView, YYLabel, IESLiveCustomButton;
@protocol IESLiveHighlightMarkDetailViewDelegate;

@interface IESLiveHighlightMarkDetailView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, IESLiveHighlightMarkItemCellDelegate, IESLiveCommentExpandDetailViewProtocol>

@property (retain, nonatomic) IESLiveHighlightMarkDetailViewModel *viewModel;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) YYLabel *publishIntroLabel;
@property (retain, nonatomic) YYLabel *publishLabel;
@property (retain, nonatomic) UIImageView *publishingIcon;
@property (retain, nonatomic) IESLiveCustomButton *recordBtn;
@property (retain, nonatomic) UIView *publishBtn;
@property (nonatomic) BOOL isPublishing;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL enableRecord;
@property (nonatomic) unsigned long long selectedIdx;
@property (weak, nonatomic) id<IESLiveHighlightMarkDetailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long currentActionType;
@property (nonatomic) unsigned long long detailAreaType;
@property (copy, nonatomic) id /* block */ didShow;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ areaTypeTempChange;
@property (copy, nonatomic) id /* block */ willOutput;
@property (copy, nonatomic) id /* block */ didOutput;
@property (copy, nonatomic) id /* block */ willSend;
@property (copy, nonatomic) id /* block */ didDelete;
@property (copy, nonatomic) id /* block */ finishComment;

- (void)bindViewModel:(id)a0;
- (void)switchToState:(unsigned long long)a0;
- (BOOL)supportActionType:(unsigned long long)a0;
- (void)tapRecordBtn;
- (void)tapPublishLabel;
- (id)publishIntroAttributedString;
- (id)publishAttributedString;
- (void)addPublishLoadingAnimation;
- (void)didTapCheckboxWithCell:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)show;
- (void)setupUI;

@end
