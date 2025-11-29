@class NSString;

@interface AWEIMDYNotificationGroupDataControllerImpl : NSObject <AWEIMDYNotificationGroupDataControllerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getGroupDataControllerWithNoticeGroupArray:(id)a0;
- (id)getLegouIMV3GroupDataControllerWithNoticeGroupArray:(id)a0;

@end
