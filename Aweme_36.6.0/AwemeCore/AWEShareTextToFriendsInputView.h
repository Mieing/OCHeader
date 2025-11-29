@class UIStackView, NSString, NSArray, UIView, AWEAwemeModel, UITextView, UIImageView, UIButton, NSDictionary, AWEIMSharePanelEmoticonSelectionView;
@protocol AWEIMShareInputEmoticonToolBarViewProtocol, AWEIMShareTextViewDelegate;

@interface AWEShareTextToFriendsInputView : UIView <UITextViewDelegate, UITextDragDelegate, AWEIMShareInputEmoticonToolBarViewDelegate, AWEIMShareTextViewProtocol>

@property (retain, nonatomic) UITextView *shareTextView;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) AWEIMSharePanelEmoticonSelectionView *emoticonSelection;
@property (retain, nonatomic) UIStackView *emoticonStack;
@property (retain, nonatomic) NSArray *buttonTypes;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL enableEmoticonToolBar;
@property (nonatomic) BOOL enableSeparetedEmoticonBtn;
@property (nonatomic) BOOL enableLeftEmoticonSelection;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) unsigned long long enterFromType;
@property (nonatomic) BOOL isHardAd;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEIMShareTextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<AWEIMShareInputEmoticonToolBarViewProtocol> *emoticonToolBar;
@property (readonly, nonatomic) UIButton *shareButton;

- (void)didClickedEmoticonControlButtonToStatus:(unsigned long long)a0;
- (void)didSelectEmoticon:(id)a0 belongToTheme:(id)a1 selectedView:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (id)getView;
- (void)leftButtonClick;
- (void)rightButtonClick;
- (void)updateShareText:(id)a0;
- (id)currentShareText;
- (void)updateBottomButtonWithButtonTypes:(id)a0;
- (void)p_trackEmoticonBtnShow;
- (void)p_trackEmoticonBtnClick;
- (void)p_setupObserver;
- (void)respondButtonActionWithCurrentButtonType:(id)a0;
- (void)sendShareMessage;
- (id)currentSelectedShareList;
- (id)getShareContext;
- (void)sendMessageWithShareList:(id)a0 shareContext:(id)a1 needCreateGroup:(BOOL)a2;
- (void)updateButtonTitles:(id)a0;
- (void)updateButtonLayoutWithButtonTypes:(id)a0;
- (void)updateVideoImageViewWithShareImpl:(id)a0;
- (id)extraAsynchronousGestures;
- (void)showKeyBoardDirectly;
- (BOOL)isDisplayingLeftEmoticonSelection;
- (void)updateRightButton:(BOOL)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)textDraggableView:(id)a0 itemsForDrag:(id)a1;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setUpUI;

@end
