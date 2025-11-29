@class NSString;

@interface BDECPigeonServiceInfoV2 : NSObject

@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *shopName;
@property (nonatomic) unsigned long long bizOnlineStatus;

- (void).cxx_destruct;

@end
