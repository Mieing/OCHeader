@class IESLiveLinkmicRoomEnterTracker, NSString, NSArray, HTSLiveLinkmicTeamfightInfo, IESLiveAudioBackgroundViewModel, IESLiveInteractVoiceWaveManager, IESLiveAudioBackgroundView, IESLiveInteractionLayout, IESLiveBigPartyEqualGuestListViewModel, NSNumber, IESLiveBigPartyEqualGuestListView;
@protocol IESLiveInteractionAsyncResourceLoader, IESLiveBigPartyPreStreamStageDataSource;

@interface IESLiveBigPartyPreStreamStage : NSObject <IESLiveBigPartyEqualGuestListViewDataSource, IESLiveBigPartyEqualGuestsListViewDelegate, IESLiveBigPartyEqualGuestListViewBackgroundUpdator, IESLiveBigPartyPreStreamStage>

@property (retain, nonatomic) IESLiveBigPartyEqualGuestListViewModel *guestListViewModel;
@property (retain, nonatomic) IESLiveBigPartyEqualGuestListView *guestListView;
@property (retain, nonatomic) IESLiveAudioBackgroundView *bgView;
@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *bgViewModel;
@property (copy, nonatomic) NSArray *slots;
@property (retain, nonatomic) NSNumber *originalAlignMode;
@property (retain, nonatomic) NSNumber *originalScaleType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (nonatomic) BOOL hasSetBg;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightInfo *teamFightInfo;
@property (nonatomic) int seiUILayout;
@property (retain, nonatomic) IESLiveInteractVoiceWaveManager *voiceWaveManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveBigPartyPreStreamStageDataSource> prestreamDataSource;
@property (weak, nonatomic) id<IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;
@property (weak, nonatomic) IESLiveLinkmicRoomEnterTracker *roomEnterTracker;
@property (copy, nonatomic) id /* block */ firstRenderBgBlock;
@property (copy, nonatomic) id /* block */ firstClippedBgBlock;
@property (copy, nonatomic) id /* block */ layoutPlayerBlock;
@property (copy, nonatomic) id /* block */ reloadLayoutBlock;
@property (copy, nonatomic) id /* block */ feedViewLoadBlock;
@property (copy, nonatomic) id /* block */ firstLoadSeatsBlock;

- (id)roomModel;
- (BOOL)isInAudienceLinkmic;
- (id)allSeatProviderViews;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (BOOL)isInTeamFight;
- (void)willLoad;
- (BOOL)isLinking;
- (void)updateWithList:(id)a0;
- (void)updateBackgroundViewWithLayout:(id)a0;
- (void)willUnLoad;
- (BOOL)isAnchorWithUser:(id)a0;
- (BOOL)isInFlexibleTeamFight;
- (void)guestListView:(id)a0 didTapGuestInfoView:(id)a1;
- (void)updateBackgroundViewWithCurrentLayout;
- (void)updateSinger:(id)a0;
- (void)updateWithmicPostionItem:(id)a0;
- (void)updateVoiceWaveThemeBgData:(id)a0;
- (void)updateSEIForVideoKTV:(id)a0;
- (void)updateRoomTheme;
- (void)updateTeamFightInfoIfNeed;
- (void)showGuestBattleBgIfNeeded;
- (void)layoutPlayerView;
- (void)showTeamFightBgIfNeeded;
- (void)p_addNewBackgroundImageIfNeeded;
- (BOOL)shouldShowGuestBattleBg;
- (void)updateLayoutTopOffset:(double)a0;
- (void)updateWithSEIStyle:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (id)playerController;
- (BOOL)isAnchor;
- (void)setupView;
- (struct CGSize { double x0; double x1; })placeholderSize;

@end
