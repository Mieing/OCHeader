@class UIImageView, UIView;

@interface BDPNovelPageBackMirrorViewController : UIViewController

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIView *waitCaptureView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (nonatomic) BOOL enableCaptureVC;

- (void)refreshMirrorVCWith:(id)a0;
- (void)snapMirrorViewWith:(id)a0 viewState:(long long)a1;
- (id)captureView:(id)a0;
- (BOOL)checkNullRect:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
