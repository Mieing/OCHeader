@class NSString;
@protocol IESGCPCGInitLaunchInterceptorOutput;

@interface IESGCPCGTXPCLoginInterceptor : NSObject <IESGCPCGInterceptor>

@property (copy, nonatomic) id /* block */ responderCompletion;
@property (retain, nonatomic) id<IESGCPCGInitLaunchInterceptorOutput> rejectOutput;
@property (nonatomic) BOOL hasInterceptPassResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doInterceptWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleResponseResultCallbackIfNeeded;
- (void).cxx_destruct;
- (id)name;
- (long long)priority;

@end
