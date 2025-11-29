@class NSString;
@protocol AWEBizTabBarItemConfigProtocol, AWEHPBottomChannelProtocol;

@interface AWEHPBottomTabGreyStatusPlugin : NSObject <AWEHPBottomChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEBizTabBarItemConfigProtocol> itemConfig;
@property (weak, nonatomic) id<AWEHPBottomChannelProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToBottomChannel:(id)a0;

@end
