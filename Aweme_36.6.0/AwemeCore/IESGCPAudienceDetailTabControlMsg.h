@class NSDictionary, IESGCPAudienceDetailStrategyTabControl;

@interface IESGCPAudienceDetailTabControlMsg : NSObject

@property (retain, nonatomic) NSDictionary *controlParams;
@property (readonly, nonatomic) IESGCPAudienceDetailStrategyTabControl *strategyTab;
@property (readonly, nonatomic) BOOL stickyTop;
@property (readonly, nonatomic) double stickyTopDelayTime;

- (id)initWithControlParams:(id)a0;
- (void).cxx_destruct;

@end
