@class NSString;

@interface IESECAdTrackerServiceImpl : NSObject <IESECAdTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackWithContext:(id /* block */)a0;
+ (void)trackURLWithURLList:(id)a0 contextBuilder:(id /* block */)a1;


@end
