@class UIView, NSString, UIImage, UIButton, WNSaveImageLogic, WNImageActionSheetView, MMUILabel, WNMultiImagesCollectionView, UIScrollView;

@interface WNImagePreviewViewController : MMUIViewController <UIScrollViewDelegate, WNImageActionSheetViewDelegate, WNSaveImageLogicExt>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *changeStyleBtn;
@property (nonatomic) double lastContentOffset;
@property (retain, nonatomic) UIScrollView *longNoteScrollView;
@property (retain, nonatomic) MMUILabel *changeStyleLabel;
@property (retain, nonatomic) WNImageActionSheetView *actionSheetView;
@property (retain, nonatomic) WNMultiImagesCollectionView *multiImagesCollectionView;
@property (retain, nonatomic) UIButton *doneBtn;
@property (nonatomic) BOOL isTrueScroll;
@property (retain, nonatomic) UIView *longNoteView;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) WNSaveImageLogic *saveImageLogic;
@property (nonatomic) unsigned int localId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)hidesStatusBar;
- (void)initView;
- (void)initHeaderView;
- (void)initBottomView;
- (void)initBackgroundView;
- (void)initActionSheetView;
- (void)onClose:(id)a0;
- (void)onDone:(id)a0;
- (void)onChangeStyle:(id)a0;
- (void)onClickButtonWithType:(long long)a0 andIndex:(long long)a1;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (void)hiddenActionSheetViewWithRecordState:(BOOL)a0;
- (void)changeImageStyle:(long long)a0;
- (void)changeImageFontStyle:(long long)a0;
- (void)changeImageBackgroudImage:(long long)a0;
- (void)changeImageAlignment:(long long)a0;
- (void)showLongNoteView;
- (void)showLongNoteWithView:(id)a0;
- (void)showSquareNoteViews;
- (void)showSquareNoteWithViews:(id)a0;
- (void)showRefuseGenerateView;
- (void)displayLongNoteView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)didSaveImage:(unsigned int)a0;
- (double)getTopInsert;
- (double)getBottomInsert;
- (double)getActionViewHeight;
- (double)getBottomViewHeight;
- (double)getHeaderViewHeight;
- (void).cxx_destruct;

@end
