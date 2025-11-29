@class NSString, IESLiveCommentEntryStore, UIImageView, UIView, UIButton;
@protocol IESLiveCommentEntryViewDelegate;

@interface IESLiveCommentEntryBaseView : UIView <IESLiveRoomThemeActions, IESLiveMessageInteractionModuleCommentAction, IESLiveCommentEntryViewProtocol>

@property (weak, nonatomic) IESLiveCommentEntryStore *store;
@property (retain, nonatomic) UIButton *innerButton;
@property (retain, nonatomic) UIView *leftExpandView;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveCommentEntryViewDelegate> delegate;

- (id)entryTitle;
- (void)roomThemeNeedRefresh;
- (void)resetInnerButtonAccessibilityWithTitle:(id)a0;
- (void)setupBgImageView;
- (void)setupLeftExpandView;
- (void)setupInnerButton;
- (void)setupExpandButton;
- (void)setupEntryTheme;
- (void)setupExpandTheme;
- (BOOL)shouldSetupLeftExpandView;
- (void)reloadLeftExpandView;
- (void)clickCommentEntry;
- (void)setupEmojiButton;
- (void)clickExpandEntry;
- (id)generateCommentEntryTheme;
- (void)relayoutBgImageViewWithImage:(id)a0;
- (id)commentEntryTheme;
- (id)stretchCommentEntryTheme:(id)a0;
- (void)commentEntryUpdateLeftExpandView;
- (id)fetchEntryTitle;
- (void)commentEntryUpdateTitle:(id)a0;
- (void)commentEntryUpdateExpandButtonHide:(BOOL)a0;
- (void)updateInnerAndExpandButtonConstraints;
- (void)enableEntryAccessibility:(BOOL)a0;
- (id)entryViewType;
- (void)commentEntryUpdate;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;
- (void)setupConfig;

@end
