@class NSString;

@interface PTYEventTracker : NSObject <PTYEventTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)event:(id)a0 params:(id)a1;
+ (void)setup:(id)a0;


@end
