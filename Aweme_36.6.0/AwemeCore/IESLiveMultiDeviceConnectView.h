@class NSString, UIImageView, UILabel, UIButton;
@protocol IESLiveMultiDeviceConnectViewDelegate;

@interface IESLiveMultiDeviceConnectView : UIView

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UILabel *qrCodeLabel;
@property (retain, nonatomic) UILabel *subTextLabel1;
@property (retain, nonatomic) UILabel *subTextLabel2;
@property (retain, nonatomic) UIButton *disConnectBtn;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIButton *helpBtn;
@property (retain, nonatomic) UIImageView *connectSuccessImageView;
@property (retain, nonatomic) UILabel *connectSuccessLabel;
@property (retain, nonatomic) UIButton *chooseSeatBtn;
@property (weak, nonatomic) id<IESLiveMultiDeviceConnectViewDelegate> delegate;
@property (copy, nonatomic) NSString *scanSceneText;

- (void)didClickBack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewState:(unsigned long long)a1;
- (void)didClickHelp;
- (void)didDisConnect;
- (void)viewStateNormal;
- (void)viewStateSuccess;
- (void)didChooseSeat;
- (void)changeViewState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
