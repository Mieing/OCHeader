@class IESLiveRevenueInteractApi, HTSLiveInteractiveAPIV2, IESLiveRevenueInteractSettingCellItem, NSMutableArray;
@protocol IESLiveRevenueInteractSettingDelegate;

@interface IESLiveRevenueInteractSettingViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *settingsArray;
@property (retain, nonatomic) IESLiveRevenueInteractApi *revenueInteractApi;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactAPI;
@property (nonatomic) BOOL needReloadData;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *playDurationSettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *defaultLargeLayoutSettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *propCardEnableSettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *stealDragonEnableSettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *allowOthersInviteSettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *allowOthersApplySettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *showInteractScoreSettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *resetScoreSettingItem;
@property (retain, nonatomic) IESLiveRevenueInteractSettingCellItem *aiAssistantSettingItem;
@property (readonly, nonatomic) unsigned long long fromType;
@property (readonly, nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESLiveRevenueInteractSettingDelegate> delegate;

- (BOOL)isInPlaying;
- (id)baseTrackParams;
- (void)bindAction;
- (id)initWithDIContext:(id)a0 scene:(unsigned long long)a1 fromType:(unsigned long long)a2;
- (BOOL)aiCellularOn;
- (void)trackDefualtLargeLayoutSettingClicked:(BOOL)a0;
- (void)trackDefualtLargeLayoutSettingShow;
- (void)addDefaultSettings;
- (void)trackInteractSettingPanelShow;
- (void)updateInteractScoreSwitchWithValue:(BOOL)a0;
- (void)addPlayDurationSettingItemIfNeeded;
- (void)addDefaultLargeLayoutSettingItemIfNeeded;
- (void)addPropCardEnableSettingItemIfNeeded;
- (void)addStealDragonEnableSettingItemIfNeeded;
- (void)addAiAssistantSettingItemIfNeeded;
- (void)addAllowOthersInviteSettingItemIfNeeded;
- (void)addAllowOthersApplySettingItemIfNeeded;
- (void)addShowInteractScoreSettingItemIfNeeded;
- (void)addResetScoreSettingItemIfNeeded;
- (void)trackSwitchAutoStartPropCard:(id)a0;
- (void)trackSwitchStealDragonEnableItem:(id)a0;
- (void)trackLinkerSettingClicked:(id)a0 isToOpen:(BOOL)a1;
- (void)trackInteractSettingPanelClicked:(id)a0;
- (void)setInteractScoreShowStatus:(BOOL)a0 callback:(id /* block */)a1;
- (void)clearInteractScore:(id /* block */)a0;
- (void).cxx_destruct;
- (id)getChannelID;

@end
