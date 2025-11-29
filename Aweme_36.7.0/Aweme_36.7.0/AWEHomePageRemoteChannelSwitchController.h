@class NSString;

@interface AWEHomePageRemoteChannelSwitchController : AWEHomePageRemoteCommonController

@property (retain, nonatomic) NSString *initialChannelID;
@property (nonatomic) BOOL isConsumed;

- (id)atomicDataModel;
- (void)autoDismissPanelIfNeed;
- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void).cxx_destruct;
- (id)currentChannelID;

@end
