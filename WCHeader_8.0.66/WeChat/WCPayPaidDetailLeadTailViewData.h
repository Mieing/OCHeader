@class NSString, WCPayPaidDetailLogoViewData, WCPayPaidDetailJumpInfo;

@interface WCPayPaidDetailLeadTailViewData : NSObject

@property (retain, nonatomic) WCPayPaidDetailLogoViewData *unsettled_logo;
@property (retain, nonatomic) WCPayPaidDetailLogoViewData *settled_logo;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) WCPayPaidDetailJumpInfo *jump_info;

- (void).cxx_destruct;

@end
