@class NSArray, NSString, AWETextField, UICollectionView, IESMMEffectMessage, UIButton;

@interface AWEARTextInputViewController : AWEStudioBaseViewController <UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) AWETextField *textFiled;
@property (retain, nonatomic) NSArray *recommandTextList;
@property (nonatomic) BOOL optimizedUIStyle;
@property (copy, nonatomic) NSString *textFieldPlaceholder;
@property (retain, nonatomic) UICollectionView *recommandTextCollectionView;
@property (retain, nonatomic) IESMMEffectMessage *effectMessageModel;
@property (nonatomic) unsigned long long maxTextCount;
@property (copy, nonatomic) id /* block */ textChangedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshTextStateWithEffectMessageModel:(id)a0;
- (void)p_doneButtonClicked:(id)a0;
- (void)layoutDoneButton;
- (void)layoutTextField;
- (void)layoutRecommandTextCollectionViewIfNeeded;
- (void)dismissWithText:(id)a0 needCheckArg1:(BOOL)a1;
- (id)initWithRecommendTextList:(id)a0 textFieldPlaceholder:(id)a1;
- (void)configTextContent:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)addNotificationObserver;

@end
