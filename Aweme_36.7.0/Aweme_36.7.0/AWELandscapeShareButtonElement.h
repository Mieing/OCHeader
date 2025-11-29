@class UIButton, AWELandScapeBottomShareButton;

@interface AWELandscapeShareButtonElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) AWELandScapeBottomShareButton *numShareButton;
@property (nonatomic) BOOL isShowSharePanel;

- (void)onShareNotification:(id)a0;
- (void)trackClickShareButton;
- (void)clickShareButton;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end
