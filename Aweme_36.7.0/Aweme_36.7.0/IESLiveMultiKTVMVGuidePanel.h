@class IESLiveButton, UIImageView, UIView, UILabel;
@protocol IESLiveWebImageService, IESLiveWebPPlayer;

@interface IESLiveMultiKTVMVGuidePanel : UIView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *guideAnimView;
@property (weak, nonatomic) id<IESLiveWebImageService> webImageService;
@property (retain, nonatomic) IESLiveButton *approveButton;
@property (retain, nonatomic) IESLiveButton *cancelButton;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) long long buttonWidth;
@property (nonatomic) long long webpHeight;
@property (copy, nonatomic) id /* block */ approveBlock;

- (void)didSetAttachingDIContext;
- (void)didClickCancleButton;
- (void)didClickApproveButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
