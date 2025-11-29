@class AWEDCFeedImageLoadScheduler, NSString;

@interface AWEDCFeedImageLoadController : AWEDCFeedBaseController <AWEDCFeedImageLoadControllerProtocol>

@property (retain, nonatomic) AWEDCFeedImageLoadScheduler *loadScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModelDataState:(long long)a0;
- (void)cancelTasksMatchingCondition:(id /* block */)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (void)cancelTaskWithIdentifier:(id)a0;
- (void)appDidEnterBackground;
- (void)containerViewDidLoad;

@end
