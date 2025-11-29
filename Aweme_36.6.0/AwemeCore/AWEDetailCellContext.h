@class AWEArchEventDataController, NSString, UITableViewCell, AWEAwemeModel, NSIndexPath;

@interface AWEDetailCellContext : NSObject

@property (copy, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) UITableViewCell *cell;
@property (retain, nonatomic) AWEArchEventDataController *edc;

- (void).cxx_destruct;

@end
