@class NSString, UIImageView, DUXContentSheet, UILabel, DUXButton;

@interface AWEStoryWorkListAddMateGuidePanel : UIViewController <DUXSheetDelegate>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *darkIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXButton *actionButton;
@property (retain, nonatomic) DUXButton *cancelButton;
@property (copy, nonatomic) id /* block */ addMateAction;
@property (nonatomic) BOOL hasTappedActionButton;
@property (nonatomic) BOOL hasTappedCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPanelWithAddMateAction:(id /* block */)a0;

- (void)sheetDidDismiss:(id)a0;
- (void)awe_themeReload;
- (void)initView;
- (void)refreshIconImage;
- (void)onActionButtonTapped;
- (void)trackStoryAddFriendPanelWithAction:(id)a0;
- (void)onCancelButtonTapped;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupLayout;

@end
