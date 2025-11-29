@class NSString;

@interface AWERecorderViewControllerLifeCycleServiceImpl : NSObject <AWERecorderViewControllerLifeCycleServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recorderViewControllerViewWillAppear:(id)a0;
- (void)recorderViewControllerViewWillDisappear:(id)a0;

@end
