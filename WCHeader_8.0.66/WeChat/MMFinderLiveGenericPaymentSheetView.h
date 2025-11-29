@class UIScrollView, MMFinderLiveGenericPaymentConfig, NSArray, NSString, MMUIMaskContainerView, UIButton, RichTextView, MMUIButton, UILabel;
@protocol MMFinderLiveGenericPaymentSheetViewDelegate;

@interface MMFinderLiveGenericPaymentSheetView : MMPageSheetBaseView <ILinkEventExt>

@property (retain, nonatomic) MMFinderLiveGenericPaymentConfig *config;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMUIMaskContainerView *scrollContainerView;
@property (retain, nonatomic) UIScrollView *itemScrollView;
@property (retain, nonatomic) UILabel *itemDescLabel;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (retain, nonatomic) RichTextView *agreementTextView;
@property (retain, nonatomic) UIButton *payButton;
@property (retain, nonatomic) UILabel *itemAdditionalDescLabel;
@property (weak, nonatomic) id<MMFinderLiveGenericPaymentSheetViewDelegate> sheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 items:(id)a1;
- (void)selectItemAtIndex:(unsigned long long)a0;
- (unsigned long long)selectedIndex;
- (void)setupPageSheetConfig;
- (void)pageSheetWillCloseWithType:(long long)a0;
- (void)initUI;
- (double)getPageSheetContentHeight;
- (double)relayoutItemViewsAndReturnDescLeft;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (double)getAgreementTextMaxWidth;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onPayButtonClicked;
- (void)panelDidClickQuestionView:(id)a0;
- (void)onCheckBoxClicked;
- (void)onItemViewTapped:(id)a0;
- (void)selectItemView:(id)a0;
- (void)onItemSelected:(id)a0;
- (void)shakeView:(id)a0;
- (void).cxx_destruct;

@end
