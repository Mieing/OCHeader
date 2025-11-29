@class NSString, NSMutableArray, NSMutableDictionary;

@interface MMFlutterHybridNavStack : NSObject {
    NSMutableArray *_viewStack;
    NSMutableDictionary *_viewMap;
    NSString *_engineGroupId;
    BOOL _isPushToNonFlutterViewController;
    NSString *_pendingPauseViewEngineId;
    NSMutableDictionary *_pausedEngine;
}

@property (readonly, nonatomic) NSString *engineGroupId;

- (id)initWithEngineGroupId:(id)a0;
- (void)viewWillAppear:(id)a0;
- (void)viewDidAppear:(id)a0;
- (void)viewDidDisappear:(id)a0;
- (void)viewDidBePopedOrDismissed:(id)a0;
- (void)viewDealloc:(id)a0;
- (void)onPushToNewViewController:(id)a0 isFlutter:(BOOL)a1;
- (BOOL)isStackTop:(id)a0;
- (void)dealloc;
- (BOOL)hasFlutterPage;
- (BOOL)hasActiveFlutterPage;
- (void).cxx_destruct;

@end
