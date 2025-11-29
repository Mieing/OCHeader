@class AWECreateSubAccountViewConfig, NSString, UILabel, AWECreateSubAccountHeaderView, UIButton;
@protocol AWECreateSubAccountViewDelegate;

@interface AWECreateSubAccountBaseView : UIView <AWECreateSubAccountViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *addAccountBtn;
@property (retain, nonatomic) UIButton *createAccountBtn;
@property (retain, nonatomic) AWECreateSubAccountHeaderView *headerView;
@property (retain, nonatomic) AWECreateSubAccountViewConfig *config;
@property (weak, nonatomic) id<AWECreateSubAccountViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAccountBtnTapped;
- (void)createAccountBtnTapped;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupSubviews;

@end
