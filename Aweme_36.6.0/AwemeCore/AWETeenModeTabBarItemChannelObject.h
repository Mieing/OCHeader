@class AWETeenModeTabBarItemConfigAbilityProxy, NSString;
@protocol AWETeenModeTabBarItemConfigProtocol;

@interface AWETeenModeTabBarItemChannelObject : NSObject

@property (retain, nonatomic) id<AWETeenModeTabBarItemConfigProtocol> itemConfig;
@property (retain, nonatomic) AWETeenModeTabBarItemConfigAbilityProxy *teenModeTabBarAbility;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) BOOL isEnter;
@property (nonatomic) BOOL bgColorFill;
@property (nonatomic) long long bottomTabOrder;
@property (nonatomic) long long bottomTabOrderAlignMainTab;
@property (nonatomic) BOOL compactBGColorFill;

- (void).cxx_destruct;
- (id)init;

@end
