@class AVAsset, NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareAsStoryChannel : AWEShareBaseChannel <AWEShareFunction, AWEShareItemDelegate>

@property (retain, nonatomic) AVAsset *firstCheckedVideoAsset;
@property (retain, nonatomic) AVAsset *lastCheckedVideoAsset;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)musicModel;
- (BOOL)isChannelEnabledWithContext:(id)a0;
- (id)liveRoomModel;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallWhiteIcon;
- (id)whiteIconBackgroundColor;
- (id)smallColoredIcon;
- (id)coloredIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (BOOL)prepareToShare;
- (BOOL)isLiveScene;
- (id)miniLunaShareModel;
- (void)prepareToShareWithCompletion:(id /* block */)a0;
- (id)createCanvas;
- (BOOL)p_moveAwemeCanShowCheckWhenClickWithContext:(id)a0;
- (unsigned long long)shareAsStoryType:(id)a0;
- (BOOL)isWebShareStoryEnabled:(id)a0;
- (BOOL)isLiveSceneWithContext:(id)a0;
- (void)rotatePotraitBeforeExcute:(id /* block */)a0;
- (void)clickLivePosterStat;
- (id)shareImageToStoryModelTrackerWithContentModel:(id)a0;
- (void)postStoryIDWithContext:(id)a0;
- (void)setupShareImageToStoryCanvasWithModel:(id)a0;
- (id)shareVideoToStoryModelTrackerWithContentModel:(id)a0;
- (void)setupShareVideoToStoryCanvasWithModel:(id)a0;
- (void)trackShareLiveToStoryWithEvent:(id)a0;
- (id)webShareStoryItemInContext:(id)a0;
- (void)p_addDSPMusicParamIfNeeded:(id)a0;
- (id)musicSceneShareToStoryParams;
- (id)createSJBStoryModelStatistics;
- (BOOL)p_checkForwardEnabledWithContext:(id)a0;
- (id)createTextStickerConfigWithRoomModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)share;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
