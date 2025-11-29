@class NSString;

@interface AWELiveCloudResourceServiceIMP : NSObject <IESLiveGeckoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerAccessKey:(id)a0;
- (id)appAccessKey;
- (void)syncResourceWithAccessKey:(id)a0 group:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void)syncResourceWithAccessKey:(id)a0 channel:(id)a1 resourceVersion:(id)a2 progressBlock:(id /* block */)a3 isColdLaunch:(BOOL)a4 completion:(id /* block */)a5;
- (void)syncResourceWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void)asyncResourceWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void)syncLazyResourceWithAccessKey:(id)a0 channel:(id)a1 resourceVersion:(id)a2 completion:(id /* block */)a3;
- (void)cancelLazyDownloadWithAccesskey:(id)a0 channel:(id)a1;
- (BOOL)hasCacheForFilename:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)dataForFilename:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (void)registerAccessKey:(id)a0 channels:(id)a1;
- (void)syncResourcesWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 isForcible:(BOOL)a4 disableThrottle:(BOOL)a5 isUrgent:(BOOL)a6 completion:(id /* block */)a7;
- (id)createTaskWithAccessKey:(id)a0 channelArray:(id)a1 isColdLaunch:(BOOL)a2 disableThrottle:(BOOL)a3 isForcible:(BOOL)a4 isUrgent:(BOOL)a5 resourceVersion:(id)a6 taskCompletion:(id /* block */)a7;
- (void)syncResourcesWithAccessKey:(id)a0 channel:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 isForcible:(BOOL)a4 disableThrottle:(BOOL)a5 isUrgent:(BOOL)a6 progressBlock:(id /* block */)a7 completion:(id /* block */)a8;
- (void)configLiveCloudResourceService;
- (void)syncResourcesWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 isForcible:(BOOL)a3 completion:(id /* block */)a4;

@end
