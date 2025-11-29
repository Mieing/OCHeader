@class AWEHPBottomTabItemModel, AWEHPChannelBadgeTask, AWENormalModeBottomChannelControllerConfig, NSString, AWEHPTabAlphaTask, AWEHPUIControlTaskPriorityQueue, AWEHomePageContextTabNode, NSArray, AWEHPTabHiddenTask, AWEHPBottomTabLottieTask, AWETabBarCustomCoverViewModel, AWEHPChannelBubbleTask;
@protocol AWEHPBottomChannelProtocol, AWEHPChannelObjectProtocol, AWEBizTabBarItemConfigProtocol, AWEHPBottomTabUIDelegate;

@interface AWENormalModeTabBarItemChannelObject : NSObject <AWETabBarItemChannelObjectProtocol, AWEHPChannelObjectProtocol>

@property (nonatomic) long long channelMode;
@property (retain, nonatomic) AWENormalModeBottomChannelControllerConfig<AWEHPBottomChannelProtocol> *bridge;
@property (retain, nonatomic) id<AWEBizTabBarItemConfigProtocol> itemConfig;
@property (weak, nonatomic) AWEHomePageContextTabNode *tabNode;
@property (weak, nonatomic) AWENormalModeTabBarItemChannelObject *parentChannel;
@property (weak, nonatomic) AWENormalModeTabBarItemChannelObject *selectedChannel;
@property (copy, nonatomic) NSArray *lifeCycleControllers;
@property (retain, nonatomic) AWEHPBottomTabItemModel *itemModel;
@property (nonatomic) BOOL isChannelLoaded;
@property (copy, nonatomic) NSArray *abilityImplList;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) long long itemType;
@property (nonatomic) BOOL isEnter;
@property (retain, nonatomic) AWEHPChannelBubbleTask *currentBubbleTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *currentBadgeTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *curPrecheckBubbleTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *curPrecheckBadgeTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *lastShowBubbleTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *lastShowBadgeTask;
@property (retain, nonatomic) AWEHPBottomTabLottieTask *lottieTask;
@property (retain, nonatomic) AWEHPBottomTabLottieTask *tempLottieTask;
@property (nonatomic) BOOL bgColorFill;
@property (nonatomic) long long bottomTabOrder;
@property (nonatomic) long long bottomTabOrderAlignMainTab;
@property (copy, nonatomic) NSArray *leftElementButtonViewModels;
@property (copy, nonatomic) NSArray *rightElementButtonViewModels;
@property (nonatomic) BOOL compactBGColorFill;
@property (copy, nonatomic) AWETabBarCustomCoverViewModel *customCoverViewModel;
@property (weak, nonatomic) id<AWEHPBottomTabUIDelegate> bottomTabUIDelegate;
@property (weak, nonatomic) id<AWEHPChannelObjectProtocol> topHomeChannel;
@property (retain, nonatomic) AWEHPUIControlTaskPriorityQueue *tabBarAlphaQueue;
@property (retain, nonatomic) AWEHPUIControlTaskPriorityQueue *tabBarHiddenQueue;
@property (weak, nonatomic) AWEHPTabAlphaTask *tabBarEffectAlphaTask;
@property (weak, nonatomic) AWEHPTabHiddenTask *tabBarEffectHiddenTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getParentChannel;
- (long long)getChannelMode;
- (id)getSelectedChannel;
- (id)getTopBarAlphaQueue;
- (id)getTopBarHiddenQueue;
- (id)getTabBarAlphaQueue;
- (id)getTabBarHiddenQueue;
- (void).cxx_destruct;
- (id)init;
- (id)getChannelID;

@end
