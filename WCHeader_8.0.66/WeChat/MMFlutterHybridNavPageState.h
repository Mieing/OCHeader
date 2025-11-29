@class FlutterBasicMessageChannel;

@interface MMFlutterHybridNavPageState : NSObject {
    FlutterBasicMessageChannel *_pageStateChannel;
}

- (id)initWithMessenger:(id)a0;
- (void)requestPagePreload;
- (void)onViewReady:(id /* block */)a0;
- (void)onPageWillAppear:(id /* block */)a0;
- (void)onPageDidAppear:(id /* block */)a0;
- (void)onPageWillDisappear:(id /* block */)a0;
- (void)onPageDidDisappear:(id /* block */)a0;
- (void)onAppEnterForeground:(id /* block */)a0;
- (void)onAppEnterBackground:(id /* block */)a0;
- (void)onPageEnter:(id /* block */)a0;
- (void)onPageResumed:(id /* block */)a0;
- (void)onPageInactive:(id /* block */)a0;
- (void)onPagePaused:(id /* block */)a0;
- (void)onPageViewDetached:(id /* block */)a0;
- (void)onPageDetached:(id /* block */)a0;
- (void)onPageExit:(id /* block */)a0;
- (void)onEngineExit:(id /* block */)a0;
- (void).cxx_destruct;

@end
