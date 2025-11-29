@class NSString, NSIndexPath;

@interface IESLiveAdminCellItem : IESLiveDynamicModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *additionText;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (nonatomic) BOOL isClassification;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL useStandardStyle;
@property (nonatomic) double cellHeight;

- (void).cxx_destruct;
- (id)identifier;

@end
