@class NSString, BDECPigeonUserInfoPatchModel;

@interface AWEECOMIMPaasUserInfoModelNew : NSObject <AWEECOMIMPaasUserInfoModelProtocol>

@property (retain, nonatomic) BDECPigeonUserInfoPatchModel *userInfoModel;
@property (copy, nonatomic) NSString *pigeonUid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)PaasUserInfoModelWithPigeonUserInfoModel:(id)a0;

- (void).cxx_destruct;

@end
