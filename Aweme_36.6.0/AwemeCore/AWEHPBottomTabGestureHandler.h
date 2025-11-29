@class NSNumber, MMKV, NSString;
@protocol AWEBizTabBarItemConfigProtocol, AWENormalModeTabBarItemConfigAbility;

@interface AWEHPBottomTabGestureHandler : NSObject <AWEHPBottomChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEBizTabBarItemConfigProtocol> itemConfig;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) long long doubleClickRefreshTimes;
@property (copy, nonatomic) NSNumber *maxDoubleClickMemoryTimes;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (copy, nonatomic) NSString *bottomTipBubbleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToBottomChannel:(id)a0;
+ (BOOL)doubleColumnPreviewSettingEnable;
+ (BOOL)doubleColumnBanTabTouch;

- (BOOL)tabBarItemLongPressFromPreviousSelectedTypeWithInterceptAfterByStateBegan:(long long)a0;
- (BOOL)shouldInterceptUpdateSelectedTabWithModel:(id)a0;
- (BOOL)tabBarItemDoubleClickFromPreviousSelectedType:(long long)a0;
- (id)initWithBottomChannel:(id)a0;
- (id)bottomTabRefreshGestureExpSettings;
- (id)bottomTipBubbleTextWithTabID:(id)a0;
- (void).cxx_destruct;

@end
