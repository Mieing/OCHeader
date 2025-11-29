@class NSString, UIImageView, UILabel, UIButton;
@protocol IESLiveScreencastMultiDeviceConnectDetailViewDelegate;

@interface IESLiveScreencastMultiDeviceConnectDetailView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *disConnectBtn;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) id<IESLiveScreencastMultiDeviceConnectDetailViewDelegate> delegate;
@property (copy, nonatomic) NSString *scanSceneText;

- (void)updateWithName:(id)a0;
- (void)didClickBack;
- (void)didDisConnect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
