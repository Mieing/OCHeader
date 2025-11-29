@class UIButton, UIImageView, OpenApiErrorParams, UIView, MMUILabel;

@interface OpenApiErrorViewController : MMUIViewController

@property (retain, nonatomic) OpenApiErrorParams *params;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *errImgView;
@property (retain, nonatomic) MMUILabel *errDescLabel;
@property (retain, nonatomic) UIButton *bottomBtn;

- (id)initWithParams:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)onBottomBtnClicked;
- (void).cxx_destruct;

@end
