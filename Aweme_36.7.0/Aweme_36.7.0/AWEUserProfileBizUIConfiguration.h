@class NSString;

@interface AWEUserProfileBizUIConfiguration : NSObject <AWEUserProfileBizUIConfigurationProtocol>

@property (retain, nonatomic) Class configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerConfiguration:(Class)a0;
+ (id)sharedInstance;
+ (void)forwardInvocation:(id)a0;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
