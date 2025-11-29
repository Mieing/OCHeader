@class NSIndexPath, UITableViewCell, AWEAwemeModel;

@interface AWEFeedTableViewLifeCycleDetectorObject : NSObject

@property (nonatomic) long long state;
@property (weak, nonatomic) UITableViewCell *cell;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;

@end
