@class UIView, MMFinderLivePurchaseTicketPayButton, NSString, MMFinderLivePrepayTiersPanelViewModel, CAShapeLayer, UIImageView, ConcertTicketInfo, MMFinderLiveChooseClarityViewNavBar, MMUILabel;

@interface MMFinderLivePurchaseConcertTicketView : MMPageSheetBaseView <WCCoinBuyCoinLogicDelegate>

@property (retain, nonatomic) ConcertTicketInfo *ticket;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *ticketDropShadowView;
@property (retain, nonatomic) UIImageView *brandLogoView;
@property (retain, nonatomic) MMUILabel *concertNameLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) MMFinderLivePurchaseTicketPayButton *payButton;
@property (nonatomic) long long asyncLoadResourceCount;
@property (nonatomic) BOOL hasCriticalResourceLoadError;
@property (nonatomic) BOOL criticalResourceLoadErrorNotified;
@property (copy, nonatomic) id /* block */ purchaseConcertTicketViewFinishBlock;
@property (retain, nonatomic) MMFinderLivePrepayTiersPanelViewModel *tiersViewModel;
@property (nonatomic) BOOL needHalfScreen;
@property (nonatomic) BOOL isTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithTiersViewModel:(id)a0 needHalfScreen:(BOOL)a1 isTicket:(BOOL)a2;
- (void)wcfSetImageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)setImageUri:(id)a0 forImageView:(id)a1 fallbackImage:(id)a2 isRequired:(BOOL)a3 isCritical:(BOOL)a4 logKey:(id)a5;
- (void)checkImageLoadCompletion;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)onBuyCoin;
- (void)fetchWecoinBalance;
- (void)payButtonClick;
- (void)cancelButtonClick;
- (void)pageSheetWillDisappear;
- (void).cxx_destruct;

@end
