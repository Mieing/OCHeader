@class NSString;

@interface BDUGLuckyDogLowVersionModule : NSObject <BDUGLuckyRouterIntercepterProtocol, BDUGLuckyDogLowVersionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)intercepterType;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)canHandleUrl:(id)a0;
- (id)handleUrl:(id)a0;
- (BOOL)isMustBeAwakened;
- (void)showLowVersionDialog;
- (id)buildCommonAlertModel;

@end
