@class NSString, NSDictionary;

@interface LSIMShopInfo : NSObject <LSIMMember>

@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *conGroupId;
@property (copy, nonatomic) NSString *shopLogo;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopOnlineStatusDesc;
@property (copy, nonatomic) NSString *shopScore;
@property (nonatomic) long long shopStatus;
@property (copy, nonatomic) NSDictionary *extension;
@property (readonly, nonatomic) unsigned long long appletType;
@property (readonly, copy, nonatomic) NSString *imAccountID;
@property (readonly, copy, nonatomic) NSString *appletID;
@property (readonly, nonatomic) long long memberRoleType;
@property (readonly, nonatomic) long long memberBizRole;
@property (readonly, copy, nonatomic) NSString *memberBizRoleString;
@property (readonly, copy, nonatomic) NSString *pigeonUid;
@property (readonly, copy, nonatomic) NSString *pigeonShopId;
@property (readonly, copy, nonatomic) NSString *senderAvatar;
@property (readonly, copy, nonatomic) NSString *senderName;
@property (readonly, nonatomic) BOOL isUserSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShopInfo:(id)a0 conGroupId:(id)a1;
- (void).cxx_destruct;

@end
