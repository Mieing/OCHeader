@class UIStackView, AWESearchAIGCShareRowView, UIView, AWEShareContext, NSString, UIButton, AWESharePanelViewModel, YYLabel, NSLayoutConstraint;
@protocol AWEShareTask, AWEIMShareContactListProtocol;

@interface AWEShareSearchAIGCPanelView : UIView <AWEShareCollectionViewHostView, AWEIMShareContactListDelegate>

@property (retain, nonatomic) AWESharePanelViewModel *viewModel;
@property (retain, nonatomic) UIStackView *panelStackView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *extensionView;
@property (retain, nonatomic) AWESearchAIGCShareRowView *shareFunctionRowView;
@property (retain, nonatomic) UIView *bottomSupplementaryView;
@property (nonatomic) double bottomSupplementaryViewHeight;
@property (nonatomic) unsigned long long styleOptions;
@property (retain, nonatomic) id<AWEIMShareContactListProtocol> contactList;
@property (retain, nonatomic) id<AWEShareTask> shareTask;
@property (retain, nonatomic) AWEShareContext *context;
@property (nonatomic) double totalHeight;
@property (retain, nonatomic) NSLayoutConstraint *supplementaryAreaHeightConstraint;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (void)themeChange;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)handleTabDidChangeNotification;
- (void)addRoundedCornerIfNeeded;
- (void)adaptItemBigFontStyle;
- (void)handleDismissNotification;
- (void)fetchShareInfo;
- (BOOL)searchAIGCShareNewPanelSwitch;
- (void)trackPanelDismiss;
- (void)sendMessageToShareList:(id)a0 shareContext:(id)a1;
- (void)shareTapClose;
- (void)trackSingleChatMerge;
- (void)showAnimated:(BOOL)a0 superView:(id)a1 completion:(id /* block */)a2;
- (void)addBottomSupplementaryView:(id)a0 animation:(BOOL)a1;
- (void)updateItemEnableStateWithShareType:(id)a0 enabled:(BOOL)a1;
- (void)updateBottomSupplementaryViewHiddenState:(BOOL)a0;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;

@end
