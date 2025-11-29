@class MMLiveRewardGiftCoinButton, NSString, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveChooseClarityViewNavBar : UIView

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) MMLiveRewardGiftCoinButton *coinButton;
@property (retain, nonatomic) MMUIButton *ticketCoinButton;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *rightText;
@property (copy, nonatomic) id /* block */ leftButtonClickBLock;
@property (copy, nonatomic) id /* block */ rightButtonClickBLock;

- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutTitleView;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)layoutNavCoinButton;
- (void)layoutNavTicketCoinButton;
- (void)layoutSeparateLine;
- (void)updateCoinButtonTitle:(id)a0 forState:(unsigned long long)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)hideRightButton;
- (void).cxx_destruct;

@end
