@class MMUIImageView, NSString, UIButton, MMUIView, RichTextView, MMUILabel;
@protocol VerifyUserSpamTipViewControllerDelegate;

@interface VerifyUserSpamTipViewController : MMUIHalfScreenViewController <ILinkEventExt> {
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    MMUIImageView *m_logoView;
    UIButton *m_sendRequestButton;
    UIButton *m_closeWindowButton;
    RichTextView *m_tipRichTextView;
}

@property (retain, nonatomic) NSString *m_nsWordingTitle;
@property (retain, nonatomic) NSString *m_nsWordingDetail;
@property (retain, nonatomic) NSString *m_nsWordingUrl;
@property (weak, nonatomic) id<VerifyUserSpamTipViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (long long)halfViewControllerHeight;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutLogoView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutOperateButton;
- (void)layoutTipRichTextView;
- (void)OnContinueSendRequest;
- (void)onClickClose:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
