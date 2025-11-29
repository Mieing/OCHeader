@class NSString, NSDictionary;

@interface LSIMCSRobot : NSObject <LSIMMember>

@property (readonly, nonatomic) long long memberRoleType;
@property (readonly, nonatomic) long long memberBizRole;
@property (readonly, copy, nonatomic) NSString *memberBizRoleString;
@property (readonly, copy, nonatomic) NSString *pigeonUid;
@property (readonly, copy, nonatomic) NSString *pigeonShopId;
@property (readonly, copy, nonatomic) NSString *senderAvatar;
@property (readonly, copy, nonatomic) NSString *senderName;
@property (readonly, nonatomic) BOOL isUserSelf;
@property (readonly, copy, nonatomic) NSDictionary *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
