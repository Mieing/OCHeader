@class NSString, NSDictionary, AWEHPBottomTabIconURLModel;
@protocol AWEHPChannelCommunicationAbility, AWEHPChannelTabVisibleAbility, AWENormalModeTabBarItemConfigAbility, AWEBizTabBarItemConfigProtocol;

@interface AWENormalModeBottomChannelControllerConfig : NSObject <AWEHPBottomChannelProtocol>

@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *channelType;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *channelInfo;
@property (nonatomic) unsigned long long reloadType;
@property (retain, nonatomic) AWEHPBottomTabIconURLModel *iconURLModel;
@property (weak, nonatomic) id<AWEBizTabBarItemConfigProtocol> controller;
@property (weak, nonatomic) id<AWENormalModeTabBarItemConfigAbility> bottomEntryAbility;
@property (weak, nonatomic) id<AWEHPChannelCommunicationAbility> communicationAbility;
@property (weak, nonatomic) id<AWEHPChannelTabVisibleAbility> tabVisibleAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
