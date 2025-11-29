@class NSString, NSMutableDictionary, AWEAwemeModel, NSIndexPath, UICollectionViewCell;

@interface AWEDCFeedRouterTargetModel : NSObject

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;

- (void).cxx_destruct;

@end
