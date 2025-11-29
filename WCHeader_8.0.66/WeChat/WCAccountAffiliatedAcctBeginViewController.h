@class MMUIButton;
@protocol WCAccountAffiliatedAcctDelegate;

@interface WCAccountAffiliatedAcctBeginViewController : WCAccountBaseViewController

@property (retain, nonatomic) MMUIButton *helpButton;
@property (weak, nonatomic) id<WCAccountAffiliatedAcctDelegate> delegate;

- (void)viewDidLoad;
- (BOOL)useTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (BOOL)useGrayBackgroundColor;
- (id)getNewHeaderView:(id)a0;
- (void)onTapRegUseNewPhone;
- (void)onTapNextButton;
- (void)onTapCloseBarButton;
- (void)onTapHelpButton;
- (void).cxx_destruct;

@end
