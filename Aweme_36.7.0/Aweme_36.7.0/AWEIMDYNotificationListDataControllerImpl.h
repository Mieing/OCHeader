@class NSString;

@interface AWEIMDYNotificationListDataControllerImpl : NSObject <AWEIMDYNotificationListDataControllerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getDataControllerWithNoticeGroup:(long long)a0 topGroup:(long long)a1 count:(long long)a2 maxTime:(double)a3 minTime:(double)a4 showActivityOverdueToast:(BOOL)a5;

@end
