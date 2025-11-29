@class AWEBarPanelDetailUIConfig, AWEBarPanelDetailConfigModel;

@interface AWEBarPanelControllerConfig : NSObject

@property (retain, nonatomic) AWEBarPanelDetailConfigModel *detailConfig;
@property (retain, nonatomic) AWEBarPanelDetailUIConfig *uiConfig;

- (void).cxx_destruct;
- (id)init;

@end
