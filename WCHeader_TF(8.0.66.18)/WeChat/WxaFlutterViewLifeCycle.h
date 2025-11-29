@class NSString;
@protocol WxaFlutterViewControllerDelegate;

@interface WxaFlutterViewLifeCycle : NSObject <WxaFlutterViewLifecycleDelegate>

@property (weak, nonatomic) id<WxaFlutterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateParams;
- (void)onCreateView:(unsigned long long)a0 arguments:(id)a1;
- (void)onResumeView:(unsigned long long)a0 arguments:(id)a1;
- (void)onPauseView:(unsigned long long)a0 arguments:(id)a1;
- (void)onDestroyView:(unsigned long long)a0 arguments:(id)a1;
- (void)onForeground:(unsigned long long)a0 arguments:(id)a1;
- (void)onBackground:(unsigned long long)a0 arguments:(id)a1;
- (void)onDestroy:(unsigned long long)a0 arguments:(id)a1;
- (void)onBackPressed:(unsigned long long)a0 arguments:(id)a1;
- (void)onPagePause:(unsigned long long)a0 arguments:(id)a1;
- (void)onPageResume:(unsigned long long)a0 arguments:(id)a1;
- (void).cxx_destruct;

@end
