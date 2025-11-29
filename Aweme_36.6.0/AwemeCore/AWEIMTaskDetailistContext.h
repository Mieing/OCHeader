@class AWEIMTaskDetailistFilterOptionModel, NSArray, UITableView, AWEIMWorkSpaceDetailResponse, UIViewController;

@interface AWEIMTaskDetailistContext : NSObject

@property (retain, nonatomic) AWEIMWorkSpaceDetailResponse *currentModel;
@property (retain, nonatomic) AWEIMTaskDetailistFilterOptionModel *filterModel;
@property (retain, nonatomic) UIViewController *filterController;
@property (copy, nonatomic) NSArray *currentSnapshot;
@property (weak, nonatomic) UITableView *tableView;

- (void).cxx_destruct;

@end
