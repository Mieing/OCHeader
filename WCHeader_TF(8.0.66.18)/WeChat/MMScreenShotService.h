@class NSURL, UIImage, NSString;

@interface MMScreenShotService : MMUserService <MMUIViewControllerExt, MMServiceProtocol>

@property (retain) NSURL *fakeScreenShotUrl;
@property (retain) UIImage *fakeScreenShot;
@property (nonatomic) double fakeScreenShotCreateTime;
@property (retain, nonatomic) UIImage *sendingScreenShot;
@property (retain, nonatomic) NSURL *sendingScreenShotUrl;
@property (nonatomic) BOOL isCaptured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)takeScreenShot;
- (id)getFakeScreenShotUrl;
- (id)getScreenShotForUrl:(id)a0;
- (double)getFakeScreenShotCreateTime;
- (void)cacheCurrentFakeScreenShot;
- (void)cleanCachedScreenShot;
- (unsigned int)getReportScene;
- (BOOL)shouldFakeScreenShot;
- (void)logVC:(id)a0 action:(id)a1;
- (void)saveFakeScreenShot:(id)a0;
- (void)MMUIViewControllerDidBePushOrPresent:(id)a0;
- (void).cxx_destruct;

@end
