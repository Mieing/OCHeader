@class MMFinderLiveWecoinLabelView, UIButton, MMUIButton;

@interface MMFinderLivePaidConnectMicAudienceBidPanel : MMPageSheetBaseView

@property (nonatomic) unsigned long long minPrice;
@property (nonatomic) unsigned long long stepPrice;
@property (nonatomic) unsigned long long curPrice;
@property (retain, nonatomic) MMFinderLiveWecoinLabelView *wecoinView;
@property (retain, nonatomic) MMUIButton *plusButton;
@property (retain, nonatomic) MMUIButton *minusButton;
@property (retain, nonatomic) UIButton *bidButton;
@property (copy, nonatomic) id /* block */ onConfirmBidCallback;

- (id)initWithMinPrice:(unsigned long long)a0 incrementStepPrice:(unsigned long long)a1;
- (void)initViews;
- (id)genOperationButtonWithIcon:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setupPageSheetConfig;
- (void)onMinus;
- (void)onPlus;
- (void)onTapBid;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
