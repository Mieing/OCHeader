@class UIView, AWEAwemeModel, DUXContentSheet, NSArray, AWEPageContext, UITextView, UIButton, UIImageView, NSMutableArray, UICollectionView, NSString, UILabel;
@protocol AWEPlayInteractionContextProtocol, AWEChapterKnowledgeDislikePanelDelegate;

@interface AWEChapterKnowledgeDislikePanel : UIViewController <DUXSheetDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UITextViewDelegate>

@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UITextView *inputTextView;
@property (retain, nonatomic) UILabel *countTextLabel;
@property (retain, nonatomic) UIButton *submitButton;
@property (copy, nonatomic) NSArray *reasonList;
@property (retain, nonatomic) NSMutableArray *selectedList;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *contextInfo;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long chapterIndex;
@property (nonatomic) long long knowledgeIndex;
@property (weak, nonatomic) id<AWEChapterKnowledgeDislikePanelDelegate> delegate;
@property (nonatomic) BOOL isLandscapeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showOnViewController:(id)a0;

- (void)sheetDidClickCloseButton:(id)a0;
- (void)closePanel;
- (id)commonParams;
- (void)submitButtonClicked;
- (void)updateDislikePanelLayout;
- (BOOL)isHalfAlphabet:(id)a0;
- (void)trackDislikePanelShow;
- (void)updateAttribute;
- (void)initCountTextLabel;
- (void)trackDislikePanelClickWithAction:(id)a0;
- (double)textInputCount:(id)a0;
- (void)trimTextView:(id)a0 toMaxCount:(long long)a1;
- (BOOL)selectedSettingExist;
- (void)trackDislikePanelResult;
- (id)initWithLandscapeMode;
- (void)configureWithModel:(id)a0 context:(id)a1 chapterIndex:(long long)a2 knowledgeIndex:(long long)a3;
- (void)configWithLandscapeUI;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)keyboardWillHide:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)textViewDidChange:(id)a0;
- (void)setupUI;
- (void)keyboardWillChangeFrame:(id)a0;

@end
