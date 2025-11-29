@class UIView, NSString, UIImageView, WCPayRealnameGuideInfo, UIButton, RichTextView, UILabel, UIScrollView;
@protocol WCPayUploadIDCardTipsViewControllerDelegate;

@interface WCPayUploadIDCardTipsViewController : MMWindowViewController <ILinkEventExt>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *uploadButton;
@property (retain, nonatomic) RichTextView *termsOfService;
@property (weak, nonatomic) id<WCPayUploadIDCardTipsViewControllerDelegate> delegate;
@property (retain, nonatomic) WCPayRealnameGuideInfo *realNameInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)close;
- (void)uploadIdCard;
- (void)openTermsOfService;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createDotLabel;
- (void).cxx_destruct;

@end
