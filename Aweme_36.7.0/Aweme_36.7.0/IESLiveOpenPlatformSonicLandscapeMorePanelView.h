@class UIButton, NSString, UIImageView, IESLiveGameOpenPlatformMorePanelCollectionViewModel, UICollectionView, UILabel, UIView;
@protocol IESLiveOpenPlatformSonicMorePanelViewDelegate;

@interface IESLiveOpenPlatformSonicLandscapeMorePanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IESLiveOpenPlatformSonicMorePanelViewService>

@property (retain, nonatomic) UICollectionView *morePanelCollectionView;
@property (retain, nonatomic) IESLiveGameOpenPlatformMorePanelCollectionViewModel *collectionViewCellModel;
@property (retain, nonatomic) UIImageView *morePanelHeaderView;
@property (retain, nonatomic) UILabel *morePanelHeaderLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *morePanelAlertview;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *withdrawView;
@property (copy, nonatomic) NSString *gameRuleDetail;
@property (copy, nonatomic) NSString *exitBtnText;
@property (weak, nonatomic) id<IESLiveOpenPlatformSonicMorePanelViewDelegate> delegate;
@property (retain, nonatomic) UIButton *withDrawButton;
@property (nonatomic) BOOL isShowing;

+ (double)morePanelViewHeight;

- (id)attachingDIContext;
- (void)setupObserver;
- (void)clickButton:(id)a0;
- (void)createBtnTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gameModel:(id)a1 diContext:(id)a2;
- (void)updateWithMorePanelTitle:(id)a0 imageUrl:(id)a1;
- (void)handlePanelDidShow;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)reloadDataSource;

@end
