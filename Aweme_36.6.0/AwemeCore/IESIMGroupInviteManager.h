@class NSString;

@interface IESIMGroupInviteManager : NSObject <IESIMGroupInviteInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)createGroupInviteCardViewController;
- (id)createGroupInviteCardViewControllerWithRouterParams:(id)a0;
- (id)createGroupInviteCardDataControllerWithParams:(id)a0;
- (id)createGroupCardConfirmBtn;
- (id)fetchGroupInfoWithSourceType:(long long)a0 bitExt:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
