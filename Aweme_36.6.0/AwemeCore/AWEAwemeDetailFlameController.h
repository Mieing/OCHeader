@class NSString;

@interface AWEAwemeDetailFlameController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (nonatomic) BOOL needRetryFetchPendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFlameHTSAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;

- (void)__feedTableViewControllerWillPlayAweme:(id)a0;
- (BOOL)enableFixFlamePendantShow;
- (id)aAWEFlameHTSAdapter;
- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
