@class NSString, NSArray, NSDictionary;

@interface BDECPigeonStaffInfoModelV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *auditingAvatar;
@property (nonatomic) BOOL avatarAuditFailed;
@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nick;
@property (copy, nonatomic) NSString *shopName;
@property (nonatomic) unsigned long long bizOnlineStatus;
@property (nonatomic) long long dispatchStatus;
@property (nonatomic) BOOL isRestricted;
@property (copy, nonatomic) NSString *restrictedDesc;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) BOOL isCrossBorder;
@property (nonatomic) BOOL canCrossBorderJumpAfterSale;
@property (copy, nonatomic) NSString *cannotJumpAfterSaleToast;
@property (copy, nonatomic) NSDictionary *extend;
@property (copy, nonatomic) NSString *extendJsonData;
@property (nonatomic) long long maxServiceNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
