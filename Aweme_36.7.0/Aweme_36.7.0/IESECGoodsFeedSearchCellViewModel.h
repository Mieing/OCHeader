@class IESECFeedResourceCardSearchItemModel;

@interface IESECGoodsFeedSearchCellViewModel : IESECGoodsFeedCellBaseViewModel

@property (retain, nonatomic) IESECFeedResourceCardSearchItemModel *itemModel;

- (struct CGSize { double x0; double x1; })calculateCellSizeForContaineSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithModel:(id)a0 context:(id)a1 useToInsert:(BOOL)a2;
- (void)searchViewModelWithModel:(id)a0;
- (void).cxx_destruct;

@end
