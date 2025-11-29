@class NSMutableArray, MMBGMAssetClassfyResult;

@interface MMBGMSelectedOptionalConfig : NSObject

@property (nonatomic) unsigned long long preferDuration;
@property (retain, nonatomic) NSMutableArray *imagesDataArray;
@property (retain, nonatomic) MMBGMAssetClassfyResult *assetClassfyResult;
@property (nonatomic) BOOL notShowSearchBar;
@property (nonatomic) BOOL notShowOstOnButton;
@property (nonatomic) BOOL notShowLyricOnButton;
@property (nonatomic) BOOL notCallDelegateOnManualSetMusicButton;
@property (nonatomic) unsigned long long shouldHideTabBar;
@property (nonatomic) unsigned long long cellType;
@property (nonatomic) BOOL enablesResetResearchViewOnEnter;
@property (nonatomic) unsigned long long targetType;
@property (retain, nonatomic) NSMutableArray *assertItems;
@property (nonatomic) BOOL shouldShowSecondCutPromotionEntry;
@property (nonatomic) double customPanelHeight;
@property (nonatomic) BOOL hideBottomBar;
@property (nonatomic) unsigned long long focusTabIndex;
@property (nonatomic) BOOL canSearchFinderFeed;
@property (nonatomic) BOOL showEditMusicButton;
@property (nonatomic) BOOL shouldEnableFavAndRecent;
@property (nonatomic) BOOL shouldUseNewNonMusicBottomIcon;

+ (double)panelHeightForFinder;

- (void).cxx_destruct;

@end
