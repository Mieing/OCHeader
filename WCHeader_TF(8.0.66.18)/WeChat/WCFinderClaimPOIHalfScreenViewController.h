@class UIButton, UIImageView, UILabel, MMUIButton, RichTextView;

@interface WCFinderClaimPOIHalfScreenViewController : MMUIHalfScreenViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *wechatImageView;
@property (retain, nonatomic) UIImageView *finderImageView;
@property (retain, nonatomic) UILabel *wechatLabel;
@property (retain, nonatomic) UILabel *finderLabel;
@property (retain, nonatomic) MMUIButton *checkBox;
@property (retain, nonatomic) RichTextView *protoTextView;
@property (retain, nonatomic) UIButton *nextButton;

- (id)init;
- (void)viewDidLoad;
- (void)initViews;
- (void)tapCheckBox;
- (void)tapNextButton;
- (BOOL)useTransparentNavibar;
- (void).cxx_destruct;

@end
