@class UIImageView, AWEAwemeModel, UILabel, UIView, UIButton;

@interface AWEBatManDisConnectedView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isRotate;

- (void)retryConnectBatManAction:(id)a0;
- (void)closeConnectBatManAction:(id)a0;
- (int)batManCenterOrientation;
- (void)rotateDisconnectedView;
- (void)resetRotateDisconnectedView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
