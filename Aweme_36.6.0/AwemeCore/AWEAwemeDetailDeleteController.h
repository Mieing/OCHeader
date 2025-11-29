@class NSString, AWEAwemeDetailDeleteControllerMultipleDataSourceDispatcher;
@protocol AWEAwemeDetailHTSControllerProtocol;

@interface AWEAwemeDetailDeleteController : AWEAwemeNewDetailBaseController <AWEAwemeDetailDeleteControllerProtocol>

@property (weak, nonatomic) id<AWEAwemeDetailHTSControllerProtocol> htsController;
@property (retain, nonatomic) AWEAwemeDetailDeleteControllerMultipleDataSourceDispatcher *multipleDataSourceDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;

- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (long long)_findFirstItemWithID:(id)a0 isDislike:(BOOL)a1;
- (void)onAwemeDeleteNotification:(id)a0;
- (void)_onAwemeDeleted:(id)a0 isDislike:(BOOL)a1;
- (BOOL)isDelAddDowngrading;
- (BOOL)needReloadForAllScene;
- (void)addListenerForMultipleDataSourceDispatcher:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
