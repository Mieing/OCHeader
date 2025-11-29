@class NSString;

@interface BDUGLuckyContainerPreloadInterceptor : NSObject <BDUGLuckyRouterIntercepterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)intercepterType;
+ (id)sharedInstance;

- (BOOL)canHandleUrl:(id)a0;
- (id)handleUrl:(id)a0;
- (BOOL)isMustBeAwakened;

@end
