@class NSArray;

@interface ZZFLEXAngelSectionEditChainModel : ZZFLEXAngelSectionBaseChainModel

@property (readonly, nonatomic) NSArray *dataModelArray;
@property (readonly, nonatomic) id dataModelForHeader;
@property (readonly, nonatomic) id dataModelForFooter;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;

- (id /* block */)dataModelByViewTag;
- (id /* block */)dataModelArrayByViewTag;
- (id /* block */)clear;
- (id /* block */)clearItems;
- (id /* block */)clearCells;
- (id /* block */)deleteHeader;
- (id /* block */)deleteFooter;
- (id /* block */)deleteCellByTag;
- (id /* block */)deleteAllCellsByTag;
- (id /* block */)deleteCellAtIndex;
- (id /* block */)deleteCellByDataModel;
- (id /* block */)update;
- (id /* block */)updateItems;
- (id /* block */)updateCells;
- (id /* block */)updateHeader;
- (id /* block */)updateFooter;
- (id /* block */)updateCellByTag;
- (id /* block */)updateCellAtIndex;
- (id /* block */)updateCellByDataModel;
- (id /* block */)updateAllCellsByTag;

@end
