@class UIButton, UIView;
@protocol IESLiveCommentPanelDelegate;

@interface IESLiveCommentPanelLandscapeImp : IESLiveCommentPanelBaseImp {
    id<IESLiveCommentPanelDelegate> _delegate;
}

@property (retain, nonatomic) UIView *leftSpacingView;
@property (retain, nonatomic) UIView *rightSpacingView;
@property (retain, nonatomic) UIButton *backToKeyabordBtn;

- (void)setupContainers;
- (void)clickPaidDanmakuEntry;
- (void)showModalContainer:(BOOL)a0;
- (void)paidDanmakuViewDidShow:(BOOL)a0;
- (void)detailAreaChange:(unsigned long long)a0 withDetailView:(id)a1;
- (void)expandEntryView:(id)a0 didSelectEntryItem:(id)a1;
- (void)setupQuickReplyContentView;
- (void)setupCommentExpandEntrysView;
- (void)setupCommentExpandOperationView;
- (double)getExpandDetailAreaContainerHeight;
- (void)setupKeyboardBtn;
- (void)clickBackToKeyboard:(id)a0;
- (void)doLayoutForBackToKeyboard:(BOOL)a0;
- (void)refreshInputViewLayout;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)setupWidgets;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
