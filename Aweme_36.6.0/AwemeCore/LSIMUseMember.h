@class LSIMObserverHash, NSString, NSDictionary;
@protocol LSIMMember;

@interface LSIMUseMember : NSObject <LSIMMember>

@property (retain, nonatomic) LSIMObserverHash *observerHash;
@property (nonatomic) BOOL tempIsSelf;
@property (retain, nonatomic) id<LSIMMember> realMember;
@property (nonatomic) BOOL isRequesting;
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

- (void)bindRealMember:(id)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)notifyObservers;

@end
