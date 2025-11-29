@class NSString;
@protocol AWEPadSplitViewService;

@interface AWEPadSplitObserversController : NSObject <AWEPadSplitControllerProtocol>

@property (weak, nonatomic) id<AWEPadSplitViewService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)padSplitControllerProtocols;
- (void)leftSideBarDidOpenNotification:(id)a0;
- (void)onPipServiceDidStart:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;

@end
