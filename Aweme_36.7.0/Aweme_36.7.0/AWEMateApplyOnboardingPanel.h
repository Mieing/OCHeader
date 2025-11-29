@class NSString, UIImageView, DUXContentSheet, UILabel, DUXButton, UIButton;

@interface AWEMateApplyOnboardingPanel : UIViewController <DUXSheetDelegate>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *darkIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *actionButton;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL hasTappedActionButton;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIButton *viewMoreButton;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPanelWithTitleText:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;

- (void)sheetDidDismiss:(id)a0;
- (void)awe_themeReload;
- (void)initView;
- (void)trackObdPopViewWithAction:(id)a0;
- (void)refreshIconImage;
- (void)onActionButtonTapped;
- (void)onViewMoreButtonTapped;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupLayout;

@end
