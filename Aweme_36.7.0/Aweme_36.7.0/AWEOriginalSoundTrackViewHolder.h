@class UIView, AWEMusicianTrackFoot, UITableView, UIButton, UIViewController, DUXPopover, AWEMusicBottomPlayerView, DUXLoadingParticleView;
@protocol AWEOriginalSoundTrackViewHolderProtocol;

@interface AWEOriginalSoundTrackViewHolder : UIView

@property (retain, nonatomic) DUXPopover *musicianGuidePopover;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) UIButton *tipsButton;
@property (weak, nonatomic) UIViewController<AWEOriginalSoundTrackViewHolderProtocol> *delegate;
@property (retain, nonatomic) UITableView *ostTableView;
@property (retain, nonatomic) AWEMusicBottomPlayerView *playerView;
@property (retain, nonatomic) AWEMusicianTrackFoot *trackFoot;
@property (weak, nonatomic) UIView *musicianCenterHeader;

+ (BOOL)musicianCenterNotDisplayInProfileCard;

- (id)aweui_emptyPageBelowView;
- (void)loadingShow:(BOOL)a0;
- (void)refreshViewControllerState;
- (void)showNetRequestError;
- (void)showPlayerViewIfNeeded:(BOOL)a0;
- (void)showMusicianCenterGuideBubble;
- (void)hidenPlayerView:(BOOL)a0;
- (id)luna_mediaCellWithTableView:(id)a0 mediaModel:(id)a1 atIndexPath:(id)a2;
- (void)p_showCollectToast:(id)a0;
- (void)tipsButtonClickAction;
- (void)luna_collectionBtnClickedWithAudio:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (double)footerBottomInset;
- (void)refreshData;

@end
