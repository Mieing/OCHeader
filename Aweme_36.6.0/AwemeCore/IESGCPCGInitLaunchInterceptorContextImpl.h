@class NSError, NSDictionary, NSString;

@interface IESGCPCGInitLaunchInterceptorContextImpl : NSObject <IESGCPCGInitLaunchInterceptorContext>

@property (readonly, nonatomic) NSError *launchReqError;
@property (readonly, copy, nonatomic) NSDictionary *launchReqInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
