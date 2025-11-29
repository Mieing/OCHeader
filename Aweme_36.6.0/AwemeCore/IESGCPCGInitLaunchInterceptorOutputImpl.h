@class NSString;

@interface IESGCPCGInitLaunchInterceptorOutputImpl : NSObject <IESGCPCGInitLaunchInterceptorOutput>

@property (copy, nonatomic) NSString *stopReason;
@property (copy, nonatomic) NSString *rejectMsg;
@property (nonatomic) long long rejectCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
