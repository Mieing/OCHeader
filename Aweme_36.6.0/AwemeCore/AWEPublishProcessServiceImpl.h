@class NSString;

@interface AWEPublishProcessServiceImpl : NSObject <AWEPublishProcessService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPublishCancelDialogWithDelegate:(id)a0;
- (id)getUniversalPublishProgressView;
- (id)getPublishProgressViewControllerWithContainer:(id)a0;
- (struct CGSize { double x0; double x1; })getPublishProgressViewSize;
- (void)showRetryViewWhenLaunch;
- (id)getPublishProgressView;
- (id)getCirclePublishProgressView;

@end
