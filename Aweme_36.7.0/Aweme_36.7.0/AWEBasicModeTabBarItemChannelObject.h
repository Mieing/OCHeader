@class NSString, AWEHPBottomTabLottieTask, NSArray, AWEHPChannelBadgeTask, AWEHPChannelBubbleTask;
@protocol AWEBasicModeTabBarItemConfigProtocol;

@interface AWEBasicModeTabBarItemChannelObject : NSObject

@property (retain, nonatomic) id<AWEBasicModeTabBarItemConfigProtocol> itemConfig;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) BOOL isEnter;
@property (retain, nonatomic) AWEHPChannelBubbleTask *currentBubbleTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *currentBadgeTask;
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

- (void).cxx_destruct;
- (id)init;

@end
