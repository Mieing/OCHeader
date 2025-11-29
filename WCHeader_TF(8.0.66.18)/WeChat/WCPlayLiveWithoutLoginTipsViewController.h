@class UIImageView, MMUILabel, MMUIButton;

@interface WCPlayLiveWithoutLoginTipsViewController : MMCPUIViewController

@property (retain, nonatomic) UIImageView *tipsImageView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIImageView *indicateImageView;

- (void)viewDidLoad;
- (void)setup;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)onClickConfirmButton:(id)a0;
- (BOOL)useTransparentNavibar;
- (double)heightForLabel;
- (void).cxx_destruct;

@end
