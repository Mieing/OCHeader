@class CContact, NSString, MMUIView, AAQueryDetailRes, RichTextView;

@interface WCPayGPOrderStatusHeaderView : MMUIView <ILinkEventExt, RichTextLayoutDelegate>

@property (retain, nonatomic) CContact *chatroomContact;
@property (retain, nonatomic) AAQueryDetailRes *orderDetailData;
@property (retain, nonatomic) NSString *remarkContent;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) RichTextView *picRichTextView;
@property (retain, nonatomic) RichTextView *remarkTextView;
@property (nonatomic) BOOL isExpandThemeContent;
@property (nonatomic) double themeContentHeight;
@property (nonatomic) double themeContentLineNumber;
@property (retain, nonatomic) NSString *payerSolitaireContent;
@property (copy, nonatomic) id /* block */ onClickPayMoneyBtn;
@property (copy, nonatomic) id /* block */ onClickViewRemarkImage;
@property (copy, nonatomic) id /* block */ onClickRemindPayerBtn;
@property (copy, nonatomic) id /* block */ onClickSetPayerRemarkBtn;
@property (copy, nonatomic) id /* block */ onClickExpandThemeBtn;
@property (copy, nonatomic) id /* block */ onClickAmountInfoBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initHeaderViewWithContainerWidth:(double)a0 orderStatusRespData:(id)a1 chatroomContact:(id)a2 remarkContent:(id)a3 expandAllContent:(BOOL)a4 payerSolitaireContent:(id)a5;
- (void)setupContentView;
- (void)setupTitleContentView;
- (void)setupContentViewWhenOrderStatusUnNormalWithOriginY:(double)a0;
- (void)setupReceiverContentViewWithOriginY:(double)a0;
- (void)setupPayerContentViewWithOriginY:(double)a0;
- (void)setupOthersContentViewWithOriginY:(double)a0 withTipsContent:(id)a1;
- (id)genOrderTitleLabel;
- (id)genOrderMainContentLabel;
- (id)genOrderTipsLabel;
- (void)payBtnPress:(id)a0;
- (BOOL)isCommonAAType;
- (BOOL)isCustomizeAAType;
- (BOOL)isActivityAAType;
- (id)getLauncherContact;
- (void)expandBtnClick;
- (BOOL)isSingleChatAndCustomizeAAPaid;
- (void)handleAmountInfoBtnClick;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)refreshRemarkTextViewWithContent:(id)a0;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
