@class NSString, NSObject;
@protocol AWEIMInteractNotificationManagerProtocol;

@interface AWEIMTotalUnreadCountObserver : NSObject <IESIMTotalUnreadCountObserver>

@property (nonatomic) long long uid;
@property (retain, nonatomic) NSObject<AWEIMInteractNotificationManagerProtocol> *notiManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
