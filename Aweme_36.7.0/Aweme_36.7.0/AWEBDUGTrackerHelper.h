@class NSString;

@interface AWEBDUGTrackerHelper : NSObject <BDUGTrackerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;

@end
