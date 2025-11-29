@class NSString, AWEGeneralSearchHelpPublishResultModule, AWEPublishBaseTask, AWESearchDecoratorPublishProgressViewModule, NSDictionary, UIViewController;
@protocol AWEGeneralSearchHelpPublishTaskDelegate;

@interface AWEGeneralSearchHelpPublishTask : NSObject <AWEPublishTaskMessage>

@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) AWESearchDecoratorPublishProgressViewModule *progressViewModule;
@property (retain, nonatomic) AWEGeneralSearchHelpPublishResultModule *resultViewModule;
@property (nonatomic) BOOL isViewPageDidAppeared;
@property (nonatomic) BOOL searchIdDidChanged;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (nonatomic) double headerHeight;
@property (weak, nonatomic) id<AWEGeneralSearchHelpPublishTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)onContainerDidAppear;
- (void)onContainerDidDisappear;
- (void)onContainerResponseFinishRefresh;
- (void)onContainerResponseWillRefresh;
- (void)updateHeaderHeight:(double)a0;
- (id)initWithContainerVC:(id)a0 task:(id)a1 shootWay:(id)a2 searchParams:(id)a3;
- (void)helpPublishTask:(id)a0 willAppendWithInfo:(id)a1;
- (void)setBusinessModules;
- (void)createProgressViewModuleWithTask:(id)a0;
- (void)trackPublishProgressViewShowWithTask:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
