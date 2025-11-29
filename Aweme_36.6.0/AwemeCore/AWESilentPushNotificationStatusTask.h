@class NSString;

@interface AWESilentPushNotificationStatusTask : NSObject <AWESilentPushTaskProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)execute;


@end
