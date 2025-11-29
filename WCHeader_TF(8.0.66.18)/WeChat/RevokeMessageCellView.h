@class NSString, RevokeMessageViewModel, UIView, RichTextView, UIButton;

@interface RevokeMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt, MessageBatchRevokeMgrExt>

@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) UIView *revokeContentView;
@property (retain, nonatomic) RichTextView *revokeRichTextView;
@property (readonly, nonatomic) RevokeMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)prepareForReuse;
- (void)setViewModel:(id)a0;
- (BOOL)canBeReused;
- (BOOL)isAccessibilityElement;
- (BOOL)canCellShowOperationMenu;
- (void)layoutContentView;
- (void)setRevokeMessageRead;
- (void)onTapExpandButton;
- (id)reusableContentView;
- (id)createRichTextViewUseLightStyle:(BOOL)a0;
- (id)createExpandButtonUseLightStyle:(BOOL)a0;
- (void)setView:(id)a0 useLightStyle:(BOOL)a1;
- (void)setView:(id)a0 useLightStyle:(BOOL)a1 isHighlight:(BOOL)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onChatBackgroundChanged:(id)a0;
- (void)onNeedUpdateLayoutForMsgId:(id)a0;
- (void).cxx_destruct;

@end
