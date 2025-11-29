@class NSString;
@protocol IESIMMessageListViewControllerProtocol;

@interface IESIMCombineMessageListTableViewComponent : AWEIMComponentBase <AWEIMMessageTableViewInterface>

@property (weak, nonatomic) id<IESIMMessageListViewControllerProtocol> listVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)cellModels;
- (void)componentDidMounted:(id)a0;
- (id)messageListViewController;
- (BOOL)isInvalidMessageCell:(id)a0;
- (void)highLightMessageCells:(id)a0;
- (id)visibleCellModels;
- (id)myLatestCellModel;
- (void)reloadTableViewWithoutTask;
- (void)reloadTableViewAndUpdateContentOffset;
- (id)combineMessageListViewController;
- (void)highLightAirborneMessageCells:(id)a0;
- (id)visibleCells;
- (void).cxx_destruct;
- (id)tableView;
- (id)indexPathsForVisibleRows;
- (void)reloadTableView;

@end
