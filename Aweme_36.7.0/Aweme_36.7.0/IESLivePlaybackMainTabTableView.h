@class NSArray;

@interface IESLivePlaybackMainTabTableView : UITableView

@property (copy, nonatomic) NSArray *beforeReloadIndexPath;
@property (copy, nonatomic) id /* block */ reloadDataCompletion;

- (void)reloadDataCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
