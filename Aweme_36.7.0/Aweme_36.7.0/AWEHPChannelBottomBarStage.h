@class AWEHPChannelBubbleTask, NSArray, AWEHPChannelTabBarItemModel, AWETabBarCustomCoverViewModel, AWEHPUIControlTaskPriorityQueue, AWEHPChannelActionPopoverTask;
@protocol AWEHPBottomTabSpecialEntryModelProtocol;

@interface AWEHPChannelBottomBarStage : NSObject

@property (nonatomic) BOOL isTabBarSelected;
@property (copy, nonatomic) AWEHPChannelTabBarItemModel *tabItem;
@property (retain, nonatomic) id<AWEHPBottomTabSpecialEntryModelProtocol> specialEntry;
@property (retain, nonatomic) AWEHPChannelBubbleTask *bubbleTask;
@property (copy, nonatomic) AWEHPChannelActionPopoverTask *popoverTask;
@property (nonatomic) BOOL bottomBarFillBackground;
@property (nonatomic) unsigned long long bottomBarThemeStyle;
@property (copy, nonatomic) NSArray *leftElementButtonViewModels;
@property (copy, nonatomic) NSArray *rightElementButtonViewModels;
@property (nonatomic) BOOL compactBGColorFill;
@property (copy, nonatomic) AWETabBarCustomCoverViewModel *customCoverViewModel;
@property (retain, nonatomic) AWEHPUIControlTaskPriorityQueue *alphaQueue;
@property (retain, nonatomic) AWEHPUIControlTaskPriorityQueue *hiddenQueue;

- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;

@end
