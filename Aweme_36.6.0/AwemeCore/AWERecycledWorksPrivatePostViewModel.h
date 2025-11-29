@class NSArray, NSMutableArray, NSString;

@interface AWERecycledWorksPrivatePostViewModel : NSObject <AWERecycledWorksPrivatePostViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *recycledWorksMut;
@property (nonatomic) long long totalCount;
@property (readonly, nonatomic) NSArray *recycledWorksList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchRecycledWorksListWithCompletion:(id /* block */)a0;
- (void)updateCurrAweme:(id)a0;
- (void)updateTotalCount:(long long)a0;
- (void)trackViewEventStatus:(long long)a0 error:(id)a1 duration:(long long)a2;
- (void)resetRecycledWorksListEmpty;
- (void).cxx_destruct;
- (id)init;

@end
