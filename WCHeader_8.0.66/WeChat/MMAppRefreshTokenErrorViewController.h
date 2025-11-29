@class UIButton, UIImageView, UIView, MMUILabel;
@protocol MMAppRefreshTokenErrorViewControllerDelegate;

@interface MMAppRefreshTokenErrorViewController : MMUIViewController

@property (retain, nonatomic) UIView *errView;
@property (retain, nonatomic) UIView *scrollView;
@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (nonatomic) BOOL isShare;
@property (weak, nonatomic) id<MMAppRefreshTokenErrorViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)onConfirmBtnClicked;
- (void).cxx_destruct;

@end
