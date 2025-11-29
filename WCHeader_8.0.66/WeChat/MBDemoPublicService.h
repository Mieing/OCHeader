@class NSString;
@protocol IMBViewDelegate;

@interface MBDemoPublicService : NSObject <IMBPublicService, IMBLifecycle, IMBPkgManagement, IMBBizContextDelegate>

@property (weak, nonatomic) id<IMBViewDelegate> viewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideConfig:(id)a0;
- (id)provideLifecycle;
- (void)provideMainScript:(id /* block */)a0;
- (id)provideFileSystem;
- (void)onCreated;
- (void).cxx_destruct;

@end
