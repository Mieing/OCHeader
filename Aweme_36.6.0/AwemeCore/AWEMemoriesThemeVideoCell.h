@class UIView, NSString, AWEMemoriesPlayerContext, AWEMemoriesPlayerTileModel, UIImageView, ACCEditSingleVideoPlayControlView, AWEMemoriesThemeVideoEditEntranceView, AWEMemoriesThemeVideoLoadingView;
@protocol AWEMemoriesThemeVideoCellDelegate;

@interface AWEMemoriesThemeVideoCell : UICollectionViewCell <AFDMuteAwemeMessage, AWEMemoriesPlayerDelegate, ACCEditPlayControlViewDelegate>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *playerContainer;
@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) AWEMemoriesThemeVideoLoadingView *loadingView;
@property (retain, nonatomic) AWEMemoriesThemeVideoEditEntranceView *editEntranceView;
@property (retain, nonatomic) ACCEditSingleVideoPlayControlView *playControlView;
@property (nonatomic) BOOL isPlayingBeforeDrag;
@property (nonatomic) double currentTotalDuration;
@property (nonatomic) long long assetCount;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *tileModel;
@property (weak, nonatomic) id<AWEMemoriesThemeVideoCellDelegate> themeControllerDelegate;
@property (weak, nonatomic) AWEMemoriesPlayerContext *playerContext;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)muteAwemeCanceled;
- (id)commonTrackParams;
- (void)endDisplay;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)updatePlayControlDurationIfNeeded;
- (void)p_setupPlayControlView;
- (void)didNLEModelPlayToEnd:(id)a0;
- (void)firstFrameRender:(id)a0;
- (void)p_themeEditAction;
- (void)bindNLEPlayer;
- (void)p_setupEditEntranceView;
- (double)coverImageScaleWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)playWithChangeSection:(BOOL)a0;
- (void)playWithNLEModel:(id)a0 draftFolder:(id)a1 isChangeSection:(BOOL)a2 contentMode:(long long)a3;
- (void)buildThemeVideoWithChangeSection:(BOOL)a0;
- (void)trackLoadingDuration:(double)a0;
- (void)trackVideoAssetCount:(long long)a0;
- (void)trackThemeVideoEditPopupShow:(long long)a0;
- (id)realNLEModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;

@end
