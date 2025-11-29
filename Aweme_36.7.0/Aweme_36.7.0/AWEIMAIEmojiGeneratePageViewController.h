@class UICollectionView, UILabel, AWEIMAIEmojiInnerButton, AWEIMAIEmojiGeneratePageViewControllerContext, AWEIMAImojiAddContext, UIButton, UIView, AWEIMMultiPathTaskPipelineNode, AWEIMAIEmojiFakeProgressView, NSString, NSMutableSet, NSArray, AWEIMAImojiGenerateContext, UIControl;
@protocol IESIMCheckBoxProtocol, IESIMToastLoadingProtocol, IESIMGradientViewProtocol, IESIMStandardAlertProtocol;

@interface AWEIMAIEmojiGeneratePageViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMAIEmojiGenaratePageCollectionViewCellDelegate, IESIMLoadingToastDelegate>

@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) AWEIMAIEmojiFakeProgressView *fakeProgressView;
@property (retain, nonatomic) UIControl<IESIMCheckBoxProtocol> *selectAllCheckBox;
@property (retain, nonatomic) UILabel *selectAllLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMAIEmojiInnerButton *publishBtn;
@property (retain, nonatomic) AWEIMAIEmojiInnerButton *addEmojiBtn;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *gradientView;
@property (retain, nonatomic) UIView<IESIMToastLoadingProtocol> *uploadingLoadingView;
@property (retain, nonatomic) UIView *loadingBackgroundView;
@property (weak, nonatomic) id<IESIMStandardAlertProtocol> dialog;
@property (nonatomic) unsigned long long generatedCount;
@property (retain, nonatomic) NSArray *allDataList;
@property (retain, nonatomic) NSMutableSet *selectedDataSet;
@property (retain, nonatomic) AWEIMAImojiGenerateContext *generateContext;
@property (retain, nonatomic) AWEIMMultiPathTaskPipelineNode *generatePipeline;
@property (retain, nonatomic) AWEIMAImojiAddContext *addContext;
@property (retain, nonatomic) AWEIMMultiPathTaskPipelineNode *addPipeline;
@property (retain, nonatomic) AWEIMAIEmojiGeneratePageViewControllerContext *context;
@property (nonatomic) BOOL didStartAdding;
@property (nonatomic) BOOL didLoadFirstImage;
@property (nonatomic) double keyboardHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithEmoticonModel:(id)a0;

- (void)loadingToastDidClosed:(id)a0;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)p_makeConstraint;
- (void)p_setupData;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShowKeyboard:(BOOL)a1;
- (id)p_mutableCommonParams;
- (void)p_createComponent;
- (void)didClickEditWithCell:(id)a0;
- (void)didClickChecked:(BOOL)a0 cell:(id)a1;
- (void)p_setupPlaceholders;
- (void)p_trackEnter;
- (void)trackWithGenerateContext:(id)a0;
- (void)p_trackGenerateFailWithText:(id)a0;
- (void)p_endProgress;
- (void)p_showButtonsWhenLoadFirstImage;
- (void)p_updateAddButtonCount;
- (void)p_didClickBack;
- (void)p_didClickSelectAll;
- (double)p_sideLength;
- (void)p_didClickPublishBtn;
- (void)p_didClickAddEmojiBtn;
- (BOOL)p_checkSelectedDataIsEmptyAndToastIfNeed;
- (void)p_trackAddEmojiWithContext:(id)a0;
- (void)p_hideAddEmojiLoading;
- (void)trackWithAddContext:(id)a0;
- (void)p_showAddEmojiLoading;
- (void)p_didCheckedItemAtIndexPath:(id)a0;
- (void)p_showEditDialogWithIndexPath:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
