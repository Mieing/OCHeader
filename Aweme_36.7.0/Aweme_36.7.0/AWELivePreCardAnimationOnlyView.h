@class UIView, IESLiveVideoGiftController, AWELivePreCardScrollAnimationView, NSString, AWELivePreCardViewModel, UIButton, CAGradientLayer, UILabel;

@interface AWELivePreCardAnimationOnlyView : UIView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) AWELivePreCardViewModel *viewModel;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIView *centerContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *enterButton;
@property (weak, nonatomic) CAGradientLayer *contentLayer;
@property (retain, nonatomic) AWELivePreCardScrollAnimationView *scrollView;
@property (retain, nonatomic) IESLiveVideoGiftController *videoGiftController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)bindVM;
- (void)playVideoGiftResourceIfNeeded;
- (void)stopVideoGiftPlayer;
- (void)tapButton;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;

@end
