@class UIScrollView, UIView, NSString, UIImageView, ExpandableTextView, UIButton, TextTranslateCgi, RichTextView, UILabel, MMUIActivityIndicatorView;

@interface TextTranslatePageSheet : MMPageSheetBaseView <ExpandableTextViewDelegate, ILinkEventExt, MMRTCMenuResponderDelegate, MMRichTextSelectEventDelegate, UIScrollViewDelegate, QuickReplyFullscreenAnimateExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) ExpandableTextView *originTextView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) RichTextView *translateTextView;
@property (retain, nonatomic) MMUIActivityIndicatorView *translateLoadingView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *successIconView;
@property (retain, nonatomic) UILabel *successLabel;
@property (retain, nonatomic) UIButton *changeLanguageButton;
@property (retain, nonatomic) NSString *originText;
@property (retain, nonatomic) TextTranslateCgi *translateCgi;
@property (nonatomic) int scene;
@property (nonatomic) BOOL disableLongPressMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0;
- (void)layoutSubviews;
- (void)pageSheetDidShow;
- (void)pageSheetDidAppear;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)initConfig;
- (void)initView;
- (void)layoutUI;
- (void)updateUI;
- (void)startTranslate;
- (void)exitSelectState;
- (void)sdkReport:(id)a0 viewId:(id)a1;
- (void)onClickChangeLanguageButton;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onRichTextViewExit;
- (id)getCurrentViewController;
- (id)getForwardingMenuActionTarget:(SEL)a0;
- (void)onSingleTapRTCV;
- (void)onRemoveRTCV;
- (id)getViewController;
- (id)getScrollView;
- (void)onExpandableTextViewExpand:(BOOL)a0;
- (void)onQuickReplyFullscreenAnimateStart;
- (void).cxx_destruct;

@end
