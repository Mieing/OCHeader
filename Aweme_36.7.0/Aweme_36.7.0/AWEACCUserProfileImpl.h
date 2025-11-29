@class NSString;

@interface AWEACCUserProfileImpl : NSObject <ACCUserProfileProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userProfileVCForUserID:(id)a0;
- (void)enterUserProfileWithUserID:(id)a0;

@end
