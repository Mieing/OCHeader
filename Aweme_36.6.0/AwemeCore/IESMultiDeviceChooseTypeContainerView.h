@class IESMultiDeviceChooseTypeView, UILabel, UIView, UIButton;
@protocol IESMultiDeviceChooseTypeContainerViewDelegate;

@interface IESMultiDeviceChooseTypeContainerView : UIView

@property (retain, nonatomic) UILabel *label1;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *label2;
@property (retain, nonatomic) UIButton *autoConnectSwitchButton;
@property (retain, nonatomic) UIButton *qrConnectionButton;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *redLine;
@property (retain, nonatomic) IESMultiDeviceChooseTypeView *liveproCameraView;
@property (retain, nonatomic) IESMultiDeviceChooseTypeView *cameraTypeView;
@property (weak, nonatomic) id<IESMultiDeviceChooseTypeContainerViewDelegate> delegate;

- (void)didTapChooseScreenDevice;
- (void)didClickMultiCamera;
- (void)hiddenScanView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
