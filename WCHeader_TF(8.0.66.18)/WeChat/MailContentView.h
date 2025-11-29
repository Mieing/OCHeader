@class NSString, UIView;
@protocol MailContentViewDelegate;

@interface MailContentView : RTETextView <UITextViewDelegate> {
    UIView *m_labelView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textViewFrame;
@property (weak, nonatomic) id<MailContentViewDelegate> m_delegate;
@property (nonatomic) BOOL forbidBecomeFirstResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentDefaultTextAttribute;
+ (id)contentDefaultParagraphStyle;

- (void)initMenuController;
- (void)showMenuController;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)mailSelect:(id)a0;
- (void)mailSelectAll:(id)a0;
- (void)mailCopy:(id)a0;
- (void)mailCut:(id)a0;
- (void)mailPaste:(id)a0;
- (void)mailDelete:(id)a0;
- (void)mailEdit:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showTips:(BOOL)a1;
- (id)getContent;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setContent:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)getContentHeight;
- (void)showReplyTips;
- (void)insertMailRTEAttachments:(id)a0;
- (void)formatContent;
- (id)getHtmlContent;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void).cxx_destruct;

@end
