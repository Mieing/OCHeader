@class NSString, UIImageView, UILabel, UIButton;

@interface AWEVideoDraftBoxEmptyView : UIView

@property (retain, nonatomic) UIButton *cameraButton;
@property (retain, nonatomic) UIImageView *cameraImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSString *enterFrom;

- (void)buttonClicked;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
