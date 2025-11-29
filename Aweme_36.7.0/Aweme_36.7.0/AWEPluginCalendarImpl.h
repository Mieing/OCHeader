@class NSString;

@interface AWEPluginCalendarImpl : NSObject <BDPCalendarPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)showCalendarEventPopupForAppID:(id)a0 title:(id)a1 params:(id)a2 completion:(id /* block */)a3;

@end
