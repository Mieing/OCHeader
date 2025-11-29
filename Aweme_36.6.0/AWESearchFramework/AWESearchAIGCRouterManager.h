@class NSMutableDictionary, AWESearchAIGCResultBaseViewController, AWESearchAIGCSSERequestManager, AWESearchAIGCPanelContainerViewController;

@interface AWESearchAIGCRouterManager : NSObject

@property (weak, nonatomic) AWESearchAIGCResultBaseViewController *aigcResultVC;
@property (weak, nonatomic) AWESearchAIGCPanelContainerViewController *aigcPanelContainer;
@property (weak, nonatomic) AWESearchAIGCResultBaseViewController *aigcPanelResultVC;
@property (retain, nonatomic) NSMutableDictionary *keepAliveLastBubbleDict;
@property (retain, nonatomic) AWESearchAIGCSSERequestManager *requestManager;
@property (nonatomic) BOOL coldStart;
@property (nonatomic) double enterTimestamp;
@property (nonatomic) double sendQueryTimestamp;

+ (id)sharedInstance;

- (double)nowTS;
- (void)aigcPageEnter;
- (void)aigcPageSendQuery;
- (void)resetColdStartState;
- (void).cxx_destruct;
- (id)init;

@end
