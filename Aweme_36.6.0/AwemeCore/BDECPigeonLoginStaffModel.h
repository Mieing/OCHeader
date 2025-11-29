@class NSString;

@interface BDECPigeonLoginStaffModel : NSObject

@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *pigeonShopId;
@property (copy, nonatomic) NSString *pigeonServiceEntityID;
@property (copy, nonatomic) NSString *pigeonCommerceEntityID;
@property (nonatomic) unsigned long long permissionStatus;

- (void).cxx_destruct;

@end
