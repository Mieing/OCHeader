@class IESLiveKTVGradientLabel, UIImageView, NSString, UILabel, IESLiveKTVRequestButton, UIView;
@protocol IESLiveCompoundSubscription, IESLiveKTVRecommendCellDelegate;

@interface IESLiveKTVRecommendCell : IESLiveSongBaseCell <IESLiveKTVAddSongAnimationViewContext>

@property (retain, nonatomic) IESLiveKTVRequestButton *downloadButton;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (nonatomic) float progress;
@property (retain, nonatomic) UILabel *preloadProgressLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *midiScoreLabel;
@property (retain, nonatomic) UIView *midiScoreView;
@property (retain, nonatomic) UILabel *orderLabel;
@property (retain, nonatomic) UILabel *songChooserNameLabel;
@property (retain, nonatomic) UIImageView *songChooserAvatar;
@property (retain, nonatomic) UIView *songChooserAvatarBackView;
@property (retain, nonatomic) UIView *challengeBg;
@property (retain, nonatomic) UIView *challengeTypeView;
@property (retain, nonatomic) UILabel *challengeScore;
@property (weak, nonatomic) id<IESLiveKTVRecommendCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForItem:(id)a0;

- (void)renderWithItem:(id)a0;
- (id)getSongItem:(BOOL)a0 musicModel:(id)a1;
- (id)favoriteStartPostionView;
- (id)orderStartPostionView;
- (void)p_addFavoriteStatusChangeObserverIfNeeded;
- (void)p_relayoutUIAndHighLightSearchMatchIfNeededWithItem:(id)a0;
- (void)layoutWithRecommendChorusRoomStyleIfNeed;
- (void)p_addSelfOrderListObserverifNeeded;
- (void)p_addDebugPreloadObserverIfNeeded;
- (void)refreshDownloadButtonUI;
- (void)p_updateClipStyle;
- (void)p_cleanClipStyle;
- (void)p_renderMidiScoreViewWithIsHighScore:(BOOL)a0;
- (void)updateWantListenInfoWithRecmmendItem:(id)a0;
- (void)hideWantListenInfo;
- (void)updateChallengeInfoWith:(id)a0;
- (void)soloKTVLayout;
- (void)p_renderDebugProgress:(id)a0;
- (void)p_renderProgress:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)coverImage;

@end
