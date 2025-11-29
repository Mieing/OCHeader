@class UIView, NSString, FinderTopicBgmInfo, EditVideoBGMPlayer, WCFinderAnimationLoadingView, UIImageView, UILabel, MMUIButton;

@interface WCFinderPatMusicCollectionReusableView : WCFinderPatCollectionReusableView <EditVideoBGMPlayerDelegate, WCAudioModuleDelegate>

@property (retain, nonatomic) UILabel *patMusicTitleLabel;
@property (retain, nonatomic) UIView *authorInfoView;
@property (retain, nonatomic) UILabel *musicAuthorLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUIButton *playButton;
@property (retain, nonatomic) MMUIButton *patButton;
@property (retain, nonatomic) UILabel *patCountLabel;
@property (retain, nonatomic) EditVideoBGMPlayer *bgmPlayer;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getPatMusicHeightWithBgmInfo:(id)a0 titleWording:(id)a1 screenWid:(double)a2 enablePostFeed:(BOOL)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpSubViews;
- (void)prepareForReuse;
- (void)setAllSubViewsHidden:(BOOL)a0;
- (void)onClickPlayAction;
- (void)showLoadingViewAnima:(BOOL)a0;
- (void)onClickPatButtonAction;
- (void)onClickAuthorAction;
- (void)updatePatMusicWithBgmInfo:(id)a0 patCount:(unsigned long long)a1 readTotalCount:(unsigned long long)a2 titleWording:(id)a3 enablePostFeed:(BOOL)a4;
- (double)contentLeftMargin;
- (void)playMusicWith:(id)a0;
- (void)playMusicWith:(id)a0 isPlay:(BOOL)a1;
- (void)stopMusicPlay;
- (void)resumeMusicPlay;
- (BOOL)patPostButtonShow;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
