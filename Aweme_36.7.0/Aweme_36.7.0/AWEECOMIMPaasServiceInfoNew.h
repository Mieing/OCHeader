@class BDECPigeonServiceInfoV2, NSString;

@interface AWEECOMIMPaasServiceInfoNew : NSObject <AWEECOMIMPaasServiceInfoProtocol>

@property (retain, nonatomic) BDECPigeonServiceInfoV2 *serviceInfo;
@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *shopName;
@property (nonatomic) unsigned long long bizOnlineStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paasUserInfoModelWithPigeonServiceInfoModel:(id)a0;

- (void).cxx_destruct;

@end
