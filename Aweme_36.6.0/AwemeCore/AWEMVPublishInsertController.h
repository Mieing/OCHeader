@class NSString;

@interface AWEMVPublishInsertController : AWEDCFeedBaseController <AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (id)mvContext;
- (BOOL)shouldInsert;
- (id)createInsertIndexPathByEnterModel:(id)a0;
- (void)insertAfterPublished:(id)a0;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
