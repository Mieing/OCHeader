@class UIView, NSString, WCPayPaidSuccessStatusModel, UIImageView, UIButton, NSMutableArray, UILabel, UIColor;
@protocol WCPayPaidSuccessStatusViewControllerDelegate;

@interface WCPayPaidSuccessStatusViewController : WCPayBaseViewController

@property (weak, nonatomic) id<WCPayPaidSuccessStatusViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *nsTitle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) WCPayPaidSuccessStatusModel *statusModel;
@property (retain, nonatomic) NSMutableArray *details;
@property (retain, nonatomic) NSMutableArray *bottomTips;
@property (nonatomic) unsigned long long vcType;
@property (nonatomic) unsigned long long vcStatus;
@property (retain, nonatomic) UIView *m_statusDetailView;
@property (retain, nonatomic) UIView *m_topLineView;
@property (retain, nonatomic) UIView *m_bottomLineView;
@property (retain) UILabel *lastValueLabel;
@property (retain, nonatomic) UIButton *m_doneButton;
@property (retain, nonatomic) UIView *m_statusBriefView;
@property (retain, nonatomic) UIView *m_statusImageView;
@property (retain, nonatomic) UIImageView *m_statusIconView;
@property (retain, nonatomic) UILabel *m_statusFirstLabel;
@property (retain, nonatomic) UILabel *m_statusSecondLabel;
@property (retain, nonatomic) UILabel *m_statusSecondDescLabel;
@property (retain, nonatomic) UILabel *m_statusThirdLabel;
@property (retain, nonatomic) UILabel *m_statusThirdDescLabel;

- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)a0;
- (void)updateView;
- (void)initNavigationBar;
- (void)onDone;
- (void)updateStatusBriefView;
- (void)updateStatusLabelView;
- (void)updateTransToBankCardDetailView;
- (void)updateDetailLabelView;
- (void)updateDoneBtn;
- (void)updateTopLineView;
- (void)updateBottomLineView;
- (void)updateStausImageView;
- (void)updateSuccessStatusImageView;
- (id)getStatusImage:(unsigned int)a0;
- (id)getStatusBarColor:(unsigned int)a0;
- (void).cxx_destruct;

@end
