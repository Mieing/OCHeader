@class NSString, UITableViewCell;

@interface AWECellBeUsedInfo : NSObject

@property (weak, nonatomic) UITableViewCell *cell;
@property (nonatomic) long long numberOfNotUsed;
@property (nonatomic) BOOL isOffScreen;
@property (retain, nonatomic) NSString *identifierOfCell;
@property (nonatomic) double estimatedScore;
@property (nonatomic) BOOL enableRefinedStrategy;

+ (id)cellBeUsedInfo:(id)a0;

- (void)safeRemoveCellChildVC;
- (void)removeCellChildVC;
- (BOOL)canBeOptimizedForMemory;
- (void).cxx_destruct;

@end
