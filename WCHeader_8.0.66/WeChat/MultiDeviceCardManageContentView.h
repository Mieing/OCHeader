@class MultiDeviceActionButton, WCAgreementCheckBox, UIImageView, MultiDeviceManageInfo, UIView, MMUIButton, MMUILabel;
@protocol MultiDeviceCardViewDelegate;

@interface MultiDeviceCardManageContentView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *deviceNameLabel;
@property (retain, nonatomic) MMUIButton *helpButton;
@property (retain, nonatomic) UIImageView *expandImageView;
@property (retain, nonatomic) MMUIButton *expandButton;
@property (retain, nonatomic) UIView *headerSeparator;
@property (retain, nonatomic) MultiDeviceActionButton *notificationButton;
@property (retain, nonatomic) MultiDeviceActionButton *sendFileButton;
@property (retain, nonatomic) MultiDeviceActionButton *lockButton;
@property (retain, nonatomic) WCAgreementCheckBox *autoLoginCheckbox;
@property (retain, nonatomic) WCAgreementCheckBox *keepAliveCheckbox;
@property (retain, nonatomic) UIView *footerSeparator;
@property (retain, nonatomic) MMUILabel *logoutLabel;
@property (retain, nonatomic) MMUIButton *logoutButton;
@property (retain, nonatomic) MultiDeviceManageInfo *deviceManageInfo;
@property (weak, nonatomic) id<MultiDeviceCardViewDelegate> delegate;
@property (nonatomic, getter=isExpand) BOOL expand;
@property (nonatomic, getter=isSingleCard) BOOL singleCard;
@property (copy, nonatomic) id /* block */ viewUpdateBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateContent;
- (void)updateIconImage;
- (void)updateViewState;
- (void)updateLayouts;
- (void)updateFrameToFitWidth:(double)a0;
- (void)reloadView;
- (void)updateView;
- (void)onTapExpandButton;
- (void)onTapHelpButton;
- (void)onTapNotificationButton;
- (void)onTapSendFileButton;
- (void)onTapLockButton;
- (void)onTapAutoLoginCheckbox;
- (void)reverseAutoLoginCheckbox;
- (void)onTapKeepAliveCheckbox;
- (void)reverseKeepAliveCheckbox;
- (void)onTapLogoutButton;
- (id)generateSeparator;
- (void).cxx_destruct;

@end
