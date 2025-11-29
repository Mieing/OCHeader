@class UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveGuideExternalCameraDisconnectDelegate;

@interface IESLiveGuideExternalCameraDisconnectPanelView : UIView

@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *reasonContainer;
@property (retain, nonatomic) UIImageView *wifiImageView;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *reStartButton;
@property (weak, nonatomic) id<IESLiveGuideExternalCameraDisconnectDelegate> delegate;

- (void)cancelDidClick;
- (void)reStartDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
