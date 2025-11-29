@class ZZFLEXSectionModel, NSMutableArray;

@interface ZZFLEXAngelSectionBaseChainModel : NSObject

@property (retain, nonatomic) NSMutableArray *listData;
@property (retain, nonatomic) ZZFLEXSectionModel *sectionModel;

- (id)initWithSectionModel:(id)a0 listData:(id)a1;
- (id /* block */)minimumLineSpacing;
- (id /* block */)minimumInteritemSpacing;
- (id /* block */)sectionInsets;
- (id /* block */)backgrounColor;
- (id /* block */)fslColumnCount;
- (id /* block */)fslCellSpace;
- (id /* block */)fslDecorationHeight;
- (id /* block */)fslHeaderEdgeInset;
- (id /* block */)fslFooterEdgeInset;
- (id /* block */)fslDecorationEdgeInset;
- (id /* block */)fslDecorationLayoutAttributes;
- (void).cxx_destruct;

@end
