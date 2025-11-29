@class WCBizLoadingView, WCPayNoticeBannerView, MMHeadImageView, UILabel, NSDictionary, MMTipsViewController, UIButton, UIScrollView, UIView, MMUILabel, WCPayBannerNotice, WCPayCurrencyInputView, NSString, WCPayCommentTextView, WCPayWebImageView;
@protocol WCPayOverseaTransferViewControllerDelegate;

@interface WCPayOverseaTransferViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, WCPayCurrencyInputViewDelegate, MMWebViewDelegate, UIScrollViewDelegate, WCPayNoticeBannerViewDelegate, WCPayCommentTextViewDelegate> {
    id<WCPayOverseaTransferViewControllerDelegate> m_delegate;
    BOOL m_bIsViewHidden;
}

@property (retain, nonatomic) UIScrollView *m_scrollView;
@property (retain, nonatomic) UIView *m_headerView;
@property (retain, nonatomic) MMHeadImageView *m_headImageView;
@property (retain) WCPayWebImageView *webHeadImageView;
@property (retain, nonatomic) UILabel *m_displayNameLabel;
@property (retain, nonatomic) UIView *m_panelView;
@property (retain, nonatomic) UILabel *m_inputTitleLabel;
@property (retain, nonatomic) WCPayCurrencyInputView *m_currencyInputView;
@property (retain, nonatomic) UIView *m_lineView;
@property (retain, nonatomic) WCPayCommentTextView *m_commentTextView;
@property (retain, nonatomic) UIView *m_currencyShowView;
@property (retain, nonatomic) MMUILabel *m_fixCurrencyLabel;
@property (retain, nonatomic) MMUILabel *m_fixFeeLabel;
@property (retain, nonatomic) UIView *m_footerView;
@property (retain, nonatomic) UIButton *m_confirmButton;
@property (retain, nonatomic) WCPayNoticeBannerView *m_noticeBannerView;
@property (retain, nonatomic) WCBizLoadingView *m_bizLoadingView;
@property (retain, nonatomic) MMTipsViewController *m_tipsView;
@property (retain, nonatomic) NSDictionary *m_payResp;
@property (nonatomic) BOOL m_isKeyBoardHide;
@property (retain, nonatomic) WCPayBannerNotice *m_bannerNotice;
@property (nonatomic) double confirmBtnY;
@property (nonatomic) BOOL m_bKeyboardHasShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void)viewDidLoad;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)resignInputKeyboard;
- (void)reportIdKeyOverseaTransferViewOpen;
- (void)reportOverseaTransferEnter;
- (void)setViewHidden:(BOOL)a0;
- (void)updateNoticeBannerView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)setupWithData:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)updateViewData;
- (void)didReceiveMemoryWarning;
- (void)onBack;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateScrollView;
- (void)updateHeaderView;
- (void)updateFooterView;
- (void)updateHeadImageView;
- (void)updateDisplayNameLabel;
- (void)updatePanelView;
- (void)updateInputTitleLabel;
- (void)updateCurrencyShowView;
- (void)updateCurrencyInputView;
- (void)updateLineView;
- (void)updateCommentTextView;
- (void)updateConfirmButton;
- (void)onButtonConfirm;
- (void)updateConfirmButtonStatus;
- (void)onInputTextChangeToString:(id)a0;
- (void)onWCPayCommentTextViewAlertViewAppear;
- (void)onWCPayCommentTextViewAlertViewDisappear;
- (id)trimString:(id)a0 ToLenght:(unsigned long long)a1;
- (void)onWCPayNoticeBannerView:(id)a0 clickWithUrl:(id)a1;
- (void)reportCancel;
- (void)reportConfirm;
- (void).cxx_destruct;

@end
