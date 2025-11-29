@class NSString;

@interface BDECPigeonServiceInfo : NSObject

@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *shopName;
@property (nonatomic) unsigned long long bizOnlineStatus;

- (void).cxx_destruct;

@end
