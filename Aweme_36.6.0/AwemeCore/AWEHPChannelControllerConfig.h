@class NSString, NSDictionary, AWEFeedChannelObject;
@protocol AWEHPChannelCornerAbility, AWEHPChannelTabItemAbility, AWEHPChannelBadgeAbility, AWEHPChannelControllerProtocol, AWEHPChannelEditAbility, AWEHPChannelCommunicationAbility, AWEHPChannelTopBarAbility, AWEHPChannelTabVisibleAbility, AWEHPChannelBubbleAbility, AWEHPChannelThemeAbility, AWEHPChannelLandingAbility, AWEHPChannelPageAbility, AWEHPChannelRefreshAbility;

@interface AWEHPChannelControllerConfig : NSObject <AWEHPChannelControllerConfigProtocol>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *channelType;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSDictionary *channelInfo;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long reloadType;
@property (retain, nonatomic) NSString *reloadSubType;
@property (nonatomic) BOOL needDelayUselessTopTab;
@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> controller;
@property (weak, nonatomic) id<AWEHPChannelTopBarAbility> topBarAbility;
@property (weak, nonatomic) id<AWEHPChannelPageAbility> pageAbility;
@property (weak, nonatomic) id<AWEHPChannelBubbleAbility> bubbleAbility;
@property (weak, nonatomic) id<AWEHPChannelTabItemAbility> tabItemAbility;
@property (weak, nonatomic) id<AWEHPChannelEditAbility> editAbility;
@property (weak, nonatomic) id<AWEHPChannelRefreshAbility> refreshAbility;
@property (weak, nonatomic) id<AWEHPChannelTabVisibleAbility> tabVisibleAbility;
@property (weak, nonatomic) id<AWEHPChannelBadgeAbility> badgeAbility;
@property (weak, nonatomic) id<AWEHPChannelThemeAbility> themeAbility;
@property (weak, nonatomic) id<AWEHPChannelCornerAbility> cornerAbility;
@property (weak, nonatomic) id<AWEHPChannelLandingAbility> landingAbility;
@property (weak, nonatomic) id<AWEHPChannelCommunicationAbility> communicationAbility;
@property (retain, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEFeedChannelObject *selfChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
