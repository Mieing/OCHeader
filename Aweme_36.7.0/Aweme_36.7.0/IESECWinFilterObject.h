@class NSArray, IESECWinTabListModel, IESECWinContext;

@interface IESECWinFilterObject : NSObject <IGListDiffable>

@property (copy, nonatomic) NSArray *filterList;
@property (weak, nonatomic) IESECWinTabListModel *tab;
@property (weak, nonatomic) IESECWinContext *context;

- (void).cxx_destruct;

@end
