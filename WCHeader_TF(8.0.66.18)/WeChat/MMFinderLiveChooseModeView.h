@class UIView, MMWebImageView, NSString, UIImageView, UIButton, MMFinderLiveTaskId, MMFinderLiveModeModel, UICollectionView, UILabel, NSIndexPath;
@protocol MMFinderLiveChooseModeViewDelegate;

@interface MMFinderLiveChooseModeView : UIView <MMFinderLiveMgrExt, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveModeModel *modeModel;
@property (retain, nonatomic) NSIndexPath *selectedModeIndexPath;
@property (retain, nonatomic) UICollectionView *modePanel;
@property (retain, nonatomic) UIView *modeGreenBG;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *subModePanel;
@property (retain, nonatomic) UIButton *verticalModeItem;
@property (retain, nonatomic) UIButton *horizontalModeItem;
@property (retain, nonatomic) MMWebImageView *gameIcon;
@property (retain, nonatomic) UILabel *gameLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (weak, nonatomic) id<MMFinderLiveChooseModeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getSubModePanelHeight:(id)a0;
+ (double)totalHeight:(id)a0;

- (id)initWithTaskId:(id)a0 modeModel:(id)a1;
- (void)onModeModelRefreshed;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutUI;
- (void)layoutSubModePanelElement;
- (void)setSelectedModeIndexPath:(id)a0 completion:(id /* block */)a1;
- (void)refreshHorizontalItem;
- (void)onVerticalModeSelected;
- (void)onHorizontalModeSelected;
- (void)onVideoSubModeSelected:(BOOL)a0;
- (void)onSubModePanelTapped;
- (id)liveTask;
- (double)cellWidth;
- (id)getSelectedModeIndexPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getModeBGFrame;
- (void)refreshVideoButtonState;
- (void).cxx_destruct;

@end
