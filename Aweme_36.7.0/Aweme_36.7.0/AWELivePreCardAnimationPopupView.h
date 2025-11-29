@class IESLiveVideoGiftController, NSString, AWELivePreCardViewModel, UIView, UILabel, UIButton;
@protocol AWELiveStreamPlayer;

@interface AWELivePreCardAnimationPopupView : UIView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) AWELivePreCardViewModel *viewModel;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UIView *liveTagContainer;
@property (retain, nonatomic) UILabel *liveTagLabel;
@property (weak, nonatomic) UIView *blurContainer;
@property (weak, nonatomic) UIView *tipLabel;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *popupContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *popEnterButton;
@property (retain, nonatomic) UILabel *popTipLabel;
@property (retain, nonatomic) IESLiveVideoGiftController *videoGiftController;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (nonatomic) long long currentPlayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)bindVM;
- (void)playVideoGiftResourceIfNeeded;
- (void)tapButton;
- (void)removePopup;
- (void)coverDidClick;
- (void)popupBlurViewIfNeeded;
- (void)playerReloadStreamWithAwemeModel:(id)a0;
- (id)initWithViewModel:(id)a0 blurContainer:(id)a1 tipLabel:(id)a2;
- (void)reloadData;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)setupUI;
- (void)createPlayer;

@end
