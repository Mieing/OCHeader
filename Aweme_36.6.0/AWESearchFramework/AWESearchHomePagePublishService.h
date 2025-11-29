@class NSString, NSHashTable, UIView, NSMutableArray;
@protocol AWEPublishProgressViewProtocol;

@interface AWESearchHomePagePublishService : AWESearchHomePageBaseService <AWEPublishTaskMessage, AWEAlertInterceptorDelegate>

@property (retain, nonatomic) UIView<AWEPublishProgressViewProtocol> *progressView;
@property (retain, nonatomic) NSHashTable *weakPublishTaskSet;
@property (retain, nonatomic) NSMutableArray *viewModelsInsertAfterFirstLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioDOUYINSSAdapterClass;

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)configUI;
- (BOOL)interceptorActionBeforeShowWithContext:(id)a0;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (id)aAWEStudioDOUYINSSAdapter;
- (BOOL)canShowProgressView:(id)a0;
- (unsigned long long)publishSuccessInsertIndex;
- (BOOL)canInsertAwemeModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)viewWillDisappear;

@end
