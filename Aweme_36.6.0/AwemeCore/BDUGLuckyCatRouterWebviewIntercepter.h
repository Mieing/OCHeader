@class NSString;

@interface BDUGLuckyCatRouterWebviewIntercepter : NSObject <BDUGLuckyRouterIntercepterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)intercepterType;
+ (id)sharedInstance;

@end
