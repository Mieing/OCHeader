@class NSString, FinderShopCouponInfo_AcquireInfo;

@interface WCFinderCouponReceiveEventInfo : NSObject

@property (nonatomic) long long event;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *stockID;
@property (nonatomic) BOOL hasResponseWhenFail;
@property (nonatomic) unsigned int couponStatus;
@property (nonatomic) unsigned int clickButtonAction;
@property (copy, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) FinderShopCouponInfo_AcquireInfo *acquireInfo;
@property (nonatomic) unsigned int clickButtonStyle;

+ (id)infoWith:(id)a0 event:(long long)a1;

- (void).cxx_destruct;

@end
