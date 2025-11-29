@class UICollectionViewCell;

@interface AWEPostWorkContributionGuideSectionModel : NSObject

@property (copy, nonatomic) id /* block */ configCellBlock;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (copy, nonatomic) id /* block */ cellHeightBlock;
@property (retain, nonatomic) Class cellClass;

- (void).cxx_destruct;

@end
