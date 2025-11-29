@class NSString, UIImageView, SystemMessageViewModel, RichTextView;

@interface SystemMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt> {
    UIImageView *m_bgImageView;
    RichTextView *m_richTextView;
    BOOL hasReportTransferAlertTips;
}

@property (readonly, nonatomic) SystemMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (BOOL)canBeReused;
- (void)updateStatus;
- (void)onAppear;
- (void)layoutContentView;
- (BOOL)canCellShowOperationMenu;
- (id)getRichTextView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onWeAppLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityPerformMagicTap;
- (void)accessibilityElementDidBecomeFocused;
- (void)onChatBackgroundChanged:(id)a0;
- (void).cxx_destruct;

@end
