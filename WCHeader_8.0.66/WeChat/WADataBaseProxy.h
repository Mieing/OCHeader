@class NSString;

@interface WADataBaseProxy : NSObject <IWADataBaseService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)tagForWeApp;
+ (long long)tagForWeAppTask;
+ (id)notificationWithTag:(long long)a0;


@end
