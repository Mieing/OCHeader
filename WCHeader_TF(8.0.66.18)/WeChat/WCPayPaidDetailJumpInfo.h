@class WCPayPaidDetailLeadTailCmdData, RouteInfo;

@interface WCPayPaidDetailJumpInfo : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) WCPayPaidDetailLeadTailCmdData *cmd_data;
@property (retain, nonatomic) RouteInfo *route_info;

- (void).cxx_destruct;

@end
