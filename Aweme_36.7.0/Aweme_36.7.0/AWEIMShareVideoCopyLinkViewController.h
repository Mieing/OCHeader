@class UIView, NSString, NSArray, AWEShareContext, UIImageView, UIButton, UICollectionView, UILabel;

@interface AWEIMShareVideoCopyLinkViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, DUXSheetDelegate>

@property (nonatomic) BOOL isGroupLinkScene;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, nonatomic) UIView *textBackView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIView *checkmarkImageBorder;
@property (readonly, nonatomic) UIImageView *checkmarkImageView;
@property (readonly, nonatomic) UIButton *reflowHintButton;
@property (readonly, nonatomic) UILabel *customSubtitleLabel;
@property (readonly, nonatomic) UICollectionView *transferToCollectionView;
@property (copy, nonatomic) NSArray *transferTypeArray;
@property (retain, nonatomic) AWEShareContext *context;
@property (copy, nonatomic) NSString *customTitle;
@property (nonatomic) BOOL hideSubtitle;
@property (copy, nonatomic) NSString *customSubtitle;
@property (nonatomic) BOOL useSimplifyStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformTextFromEnum:(unsigned long long)a0;

- (double)panelHeight;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (id)dux_titleForColoseButton;
- (void)__layoutComponents;
- (id)initWithText:(id)a0 context:(id)a1;
- (BOOL)p_isGroupLinkScene;
- (void)__createComponentsWithText:(id)a0;
- (void)__bindObserve;
- (void)__trackOffsiteShareChannelsShow;
- (void)__updateHideReflowIfNeeded;
- (id)classTransferTypeArray;
- (id)platformTextToEnum:(id)a0;
- (void)__refreshCheckboxWithSelected:(BOOL)a0;
- (void)setupTransferToCollectionView;
- (void)setupHintButton;
- (void)setupTextLabelWithText:(id)a0;
- (void)__tapTextLabel:(id)a0;
- (id)__reflowHintButtonText;
- (void)__tapReflowHintButton:(id)a0;
- (id)__checkImageWithSelected:(BOOL)a0;
- (void)writePasteboardIfNeed:(id /* block */)a0;
- (id)elementForTransferType:(unsigned long long)a0;
- (id)__titleLabelText;
- (void)__trackOffsiteShareChannelsClick:(unsigned long long)a0;
- (void)__transferToType:(unsigned long long)a0;
- (struct CGColor { } *)__checkImageBorderColorWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCustomSubtitleLabel;

@end
