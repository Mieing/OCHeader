@class NSString;

@interface IESAccountABInject : NSObject <IESAccountABInjectDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canAccountSDKInterceptSafeErrorCode:(long long)a0;

@end
