@class NSString;
@protocol AWEConcernUpdateDetailDispatcherDelegate;

@interface AWEConcernUpdateDetailDispatcher : AWEAwemeNewDetailBaseController <AWEConcernUpdateDetailDispatcherProtocol>

@property (nonatomic) BOOL isFingerSliding;
@property (weak, nonatomic) id<AWEConcernUpdateDetailDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerTableViewCell:(id)a0;
- (void)scrollViewDidScrollEndWithActive;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)onScrollWillChangeVideo:(id)a0 index:(long long)a1 directTop:(BOOL)a2;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)isFromUpdateDetail:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
