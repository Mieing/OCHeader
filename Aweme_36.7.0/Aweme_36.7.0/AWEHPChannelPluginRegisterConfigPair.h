@class AWEHPChannelPluginRegisterConfig;
@protocol AWEHPChannelPluginControllerProtocol;

@interface AWEHPChannelPluginRegisterConfigPair : NSObject

@property (retain, nonatomic) AWEHPChannelPluginRegisterConfig *config;
@property (retain, nonatomic) id<AWEHPChannelPluginControllerProtocol> sharedPlugin;

- (void).cxx_destruct;

@end
