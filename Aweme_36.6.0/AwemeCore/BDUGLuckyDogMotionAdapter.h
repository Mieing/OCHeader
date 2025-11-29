@class NSString;

@interface BDUGLuckyDogMotionAdapter : NSObject <BDUGLuckyDogMotionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeNetworkModule;
+ (id)sharedInstance;
+ (id)serviceProtocol;

@end
