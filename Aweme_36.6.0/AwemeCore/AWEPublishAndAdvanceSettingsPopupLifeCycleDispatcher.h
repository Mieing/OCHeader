@class NSString, AWEPostPageElementCenter;

@interface AWEPublishAndAdvanceSettingsPopupLifeCycleDispatcher : NSObject <AWEPostPageLifeCycleMessage>

@property (retain, nonatomic) AWEPostPageElementCenter *elementCenter;
@property (nonatomic) BOOL isViewDidLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)elementAppear;
- (void)audioSessionReset;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;

@end
