@class AWEBarPanelDetailBottomUIConfig, AWEBarPanelVCPanelUIConfig;

@interface AWEBarPanelDetailUIConfig : NSObject

@property (retain, nonatomic) AWEBarPanelDetailBottomUIConfig *bottomConfig;
@property (retain, nonatomic) AWEBarPanelVCPanelUIConfig *panelConfig;

+ (id)defaultWatchLaterConfig;
+ (id)finishWatchLaterConfig;

- (void).cxx_destruct;
- (id)init;

@end
