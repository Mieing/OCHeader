@class NSString, WCPayPaidDetailLogoViewData, RouteInfo;

@interface WCPayPaidDetailFinderInfoViewData : NSObject

@property (retain, nonatomic) WCPayPaidDetailLogoViewData *logo;
@property (retain, nonatomic) WCPayPaidDetailLogoViewData *sub_logo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) RouteInfo *route_info;

- (void).cxx_destruct;

@end
