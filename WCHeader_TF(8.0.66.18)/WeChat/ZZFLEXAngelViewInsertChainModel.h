@class ZZFLEXSectionModel;

@interface ZZFLEXAngelViewInsertChainModel : ZZFLEXAngelViewBaseChainModel

@property (retain, nonatomic) ZZFLEXSectionModel *sectionModel;
@property (nonatomic) long long insertTag;
@property (nonatomic) long long status;

- (id /* block */)toSection;
- (id /* block */)toIndex;
- (id /* block */)beforeCell;
- (id /* block */)afterCell;
- (void)p_tryInsertCell;
- (void).cxx_destruct;

@end
