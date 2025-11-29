@class UIStackView, NSArray, NSString, NSLayoutConstraint, UIView, UIButton;

@interface AWEMateApplicationCellReplyMessageView : UIView <AWEUserListGeneralCellCustomBottomViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSLayoutConstraint *contentLayoutTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLayoutLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLayoutTrailingConstraint;
@property (retain, nonatomic) UIStackView *messageListView;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIButton *replyButton;
@property (retain, nonatomic) NSArray *messageList;
@property (nonatomic) BOOL showReplyButton;
@property (copy, nonatomic) id /* block */ replyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutWithTitleContentLayoutGuide:(id)a0;
- (id)initWithMessageList:(id)a0 showReplyButton:(BOOL)a1;
- (void)replyButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
