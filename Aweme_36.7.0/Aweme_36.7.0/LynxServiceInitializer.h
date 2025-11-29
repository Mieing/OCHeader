@class NSString;

@interface LynxServiceInitializer : NSObject <LynxServiceInitializerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupService;

@end
