@class AWENewVideoCoverChooseBottomTitleCollectionView, UIView, AWENewCoverEditImageTemplateViewModel, NSString, UIButton, AWENewVideoCoverTextTemplateController, UICollectionView, AWENewVideoCoverChooseBottomTextStyleView, UILabel, UIScrollView;
@protocol AWENewVideoCoverEditTemplateTextDelegate;

@interface AWENewVideoCoverTextTemplateContainerView : UIView <AWETextTemplateControllerDelegate, AWECoverChooseBottomTitleCollectionViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) UIView *inputBGView;
@property (retain, nonatomic) UILabel *inputTipLabel;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UICollectionView *itemTabCollectionView;
@property (retain, nonatomic) UIScrollView *contentContainerView;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) AWENewVideoCoverChooseBottomTitleCollectionView *titleCollectionView;
@property (retain, nonatomic) AWENewVideoCoverTextTemplateController *textTemplateController;
@property (retain, nonatomic) AWENewVideoCoverChooseBottomTextStyleView *styleView;
@property (retain, nonatomic) AWENewCoverEditImageTemplateViewModel *viewModel;
@property (nonatomic) long long currentTabType;
@property (weak, nonatomic) id<AWENewVideoCoverEditTemplateTextDelegate> textDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)titleCollectionView:(id)a0 shouldSelectItem:(id)a1;
- (void)titleCollectionView:(id)a0 didSelectIndex:(long long)a1 item:(id)a2;
- (void)titleCollectionView:(id)a0 willDisplayIndex:(long long)a1 item:(id)a2;
- (void)stickerPickerControllerDidTapClearStickerButton:(id)a0;
- (void)stickerPickerController:(id)a0 didSelectSticker:(id)a1 extraParams:(id)a2 indexPath:(id)a3 categoryIdentifier:(id)a4;
- (void)stickerPickerController:(id)a0 didDeselectSticker:(id)a1;
- (double)contentContainerHeight;
- (void)updateCurrentStyle:(id)a0;
- (id)createTemplatePickerConfig;
- (void)updateCurrentSticker:(id)a0;
- (void)updateCurrentStickerWithContent:(id)a0;
- (void)textShowChooseStyle;
- (void)updateCurrentNLELayerView:(id)a0;
- (void)textShowChooseTemplate;
- (void)textTemplateUpdateChooseEffect:(id)a0;
- (void)textTemplateUpdateWithResourceId:(id)a0 effectId:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 textDelegate:(id)a2;
- (void)textAddDefaultText:(id)a0;
- (void)onInputTapAction;
- (void)onFinishAction;
- (id)titleForTabItem:(long long)a0;
- (void)checkIndexChange;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)updateContent;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
