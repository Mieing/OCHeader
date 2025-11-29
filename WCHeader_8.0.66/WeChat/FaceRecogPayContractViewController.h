@class UIButton, NSString, UIImageView, MMUIButton, MMUILabel;
@protocol FaceRecogPayContractViewControllerDelegate;

@interface FaceRecogPayContractViewController : MMUIViewController <FaceRecogPayContractConfirmViewDelegate>

@property (retain, nonatomic) UIImageView *topIconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMUIButton *otherVerifyWayBtn;
@property (weak, nonatomic) id<FaceRecogPayContractViewControllerDelegate> delegate;
@property (nonatomic) BOOL hasContract;
@property (retain, nonatomic) NSString *hintText;
@property (retain, nonatomic) NSString *contractUrl;
@property (retain, nonatomic) NSString *contractTitle;
@property (retain, nonatomic) NSString *contractDesc;
@property (retain, nonatomic) NSString *otherVerifyTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)setupUI;
- (BOOL)needSignContract;
- (void)onBack;
- (void)onStartVerify;
- (void)onClickOtherVerifyButton;
- (void)didConfirmContract;
- (void).cxx_destruct;

@end
