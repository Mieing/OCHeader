@interface ZZFLEXAngelViewBatchInsertChainModel : ZZFLEXAngelViewBaseBatchChainModel

@property (nonatomic) long long status;
@property (nonatomic) long long insertTag;

- (id /* block */)withDataModelArray;
- (id /* block */)toSection;
- (id /* block */)toIndex;
- (id /* block */)beforeCell;
- (id /* block */)afterCell;
- (void)p_tryInsertCells;

@end
