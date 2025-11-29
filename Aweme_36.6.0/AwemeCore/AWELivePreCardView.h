@class IESLiveGradientView, IESLiveVideoGiftController, NSString, AWELivePreCardViewModel, UILabel, UIView, UIButton;
@protocol AWELiveStreamPlayer;

@interface AWELivePreCardView : UIView <IESLiveVideoGiftControllerDelegate, IESLivePlayerControllerDelegate>

@property (retain, nonatomic) AWELivePreCardViewModel *viewModel;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) IESLiveGradientView *contentContainer;
@property (retain, nonatomic) UIView *liveTagContainer;
@property (retain, nonatomic) UILabel *liveTagLabel;
@property (retain, nonatomic) IESLiveVideoGiftController *videoGiftController;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)playerFrozen:(id)a0;
- (void)bindVM;
- (void)playVideoGiftResourceIfNeeded;
- (void)stopVideoGiftPlayer;
- (void)tapButton;
- (void)playerReloadStreamWithAwemeModel:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;
- (void)createPlayer;

@end
