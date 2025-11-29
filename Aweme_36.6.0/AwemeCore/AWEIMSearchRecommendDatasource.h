@class NSString, RxCollectionViewDiffableDataSource;

@interface AWEIMSearchRecommendDatasource : NSObject <AWEIMSearchRecommendProtocol>

@property (weak, nonatomic) RxCollectionViewDiffableDataSource *diffableDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellItemForResult:(id)a0;
- (void)updateResult:(id)a0 isCache:(BOOL)a1;
- (id)cellItemForResult:(id)a0 withRequestResult:(id)a1;
- (id)cellModelForResult:(id)a0;
- (void)fetchRecommendData;
- (void)updateData:(id)a0 isCache:(BOOL)a1;
- (void).cxx_destruct;

@end
