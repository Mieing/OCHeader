@class RichTextView, NSString, NSDictionary, UIView, UILabel, UIScrollView;

@interface ChatBotPrivacyPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt> {
    NSString *m_userName;
    UIView *m_contentView;
    UILabel *m_titleLabel;
    UIScrollView *m_scrollView;
    double m_maxContentHeight;
    RichTextView *m_contentLabel;
    id /* block */ m_confirmHandler;
    id /* block */ m_cancelHandler;
}

@property (retain, nonatomic) NSDictionary *sessionParas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserName:(id)a0 confirmHandler:(id /* block */)a1 cancelHandler:(id /* block */)a2;
- (id)reportParameterWithViewId:(id)a0;
- (void)pageSheetDidShow;
- (void)setAllowTapBgMaskToClose:(BOOL)a0;
- (void)initContentView;
- (void)layoutSubviews;
- (id)getPrivacyContent;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
