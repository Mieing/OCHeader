@class AWEIMTaskPlatformContext, RxCollectionViewDiffableDataSource;

@interface AWEIMTaskCardNaviDatasource : NSObject

@property (retain, nonatomic) AWEIMTaskPlatformContext *context;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffiableDataSource;

- (id)__cellModelForResult:(id)a0;
- (id)__createDiffableDataSource:(id)a0;
- (void)renderDatas:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0;

@end
