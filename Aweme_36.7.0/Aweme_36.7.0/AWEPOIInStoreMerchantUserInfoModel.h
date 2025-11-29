@class NSString, AWEPOIInStoreAvatarModel;

@interface AWEPOIInStoreMerchantUserInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) AWEPOIInStoreAvatarModel *avatar;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) long long merchantId;
@property (nonatomic) BOOL isFollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
