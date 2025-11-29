@class AWEMessageReachComponentModel, AWEMessageReachParamContext;
@protocol AWEMessageReachSideBarBadgeStrategyResultProtocol;

@interface AWEMessageReachBizPluginSideBarContext : NSObject

@property (retain, nonatomic) id<AWEMessageReachSideBarBadgeStrategyResultProtocol> result;
@property (retain, nonatomic) AWEMessageReachComponentModel *component;
@property (retain, nonatomic) AWEMessageReachParamContext *paramContext;

- (void).cxx_destruct;

@end
