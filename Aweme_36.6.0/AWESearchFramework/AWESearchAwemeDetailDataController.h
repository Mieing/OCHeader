@class NSString, NSMutableArray;

@interface AWESearchAwemeDetailDataController : AWEListDataController <AWEAwemeDetailTableViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *observers;
@property (copy, nonatomic) NSString *reactID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)detailTableViewControllerWillScrollToPreviousItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToNextItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (id)initWithReactID:(id)a0;
- (void)loadDataWithCompletion:(id /* block */)a0 loadPrevious:(BOOL)a1;
- (void)notifyItemStateChangedWithReacID:(id)a0 awemeModel:(id)a1 event:(id)a2;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
