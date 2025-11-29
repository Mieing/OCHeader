@class NSString, UILabel, UIButton;

@interface IESLiveGuideDirectorDeviceInfoView : UIView

@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ clickConfirmBlock;

- (void).cxx_destruct;
- (void)cancel;
- (void)setupUI;
- (void)confirm;
- (id)initWithDeviceInfo:(id)a0;

@end
