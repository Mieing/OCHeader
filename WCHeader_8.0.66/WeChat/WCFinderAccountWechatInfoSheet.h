@class MasterWxAcctInfo, WCFinderHeadImageView, UILabel, UIView;

@interface WCFinderAccountWechatInfoSheet : WCFinderCustomPanelSheet

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MasterWxAcctInfo *accountInfo;

- (void)viewDidLoad;
- (long long)closeButtonStyle;
- (struct CGVector { double x0; double x1; })closeButtonPosition;
- (struct CGSize { double x0; double x1; })closeButtonSize;
- (id)loadContentView;
- (void)reloadView;
- (double)maxHeight;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
