@class UIScrollView, UIView, NSString, UIImageView, UIButton, WCPayRealnameGuideInfo, RichTextView, UILabel, MMUIButton;
@protocol WCPayRealNameTipsViewControllerDelegate;

@interface WCPayRealNameTipsViewController : MMWindowViewController <ILinkEventExt, MMWebViewDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) RichTextView *termsOfService;
@property (retain, nonatomic) MMUIButton *checkBoxButton;
@property (retain, nonatomic) RichTextView *checkBoxInfo;
@property (weak, nonatomic) id<WCPayRealNameTipsViewControllerDelegate> delegate;
@property (weak, nonatomic) id<WCPayRealNameTipsViewControllerDelegate> reportDelegate;
@property (retain, nonatomic) WCPayRealnameGuideInfo *realNameInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)close;
- (void)confirm;
- (void)openWeb:(id)a0;
- (void)clickCheckBox:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)webViewReturn:(id)a0;
- (id)createDotLabel;
- (void)layoutForBalance;
- (void).cxx_destruct;

@end
