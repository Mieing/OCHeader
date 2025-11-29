@class NSMutableArray;

@interface IESLiveScreencastMsgPushMessageListAdapterUpdater : IESLiveTableViewAdapterUpdater

@property (retain, nonatomic) NSMutableArray *messageModels;
@property (copy, nonatomic) id /* block */ scrollViewWillBeginDragging;
@property (copy, nonatomic) id /* block */ scrollViewDidEndDragging;

- (void)registerCellWith:(id)a0;
- (void)scrollToBottomWithAnimated:(BOOL)a0;
- (void)batchUpdate:(id /* block */)a0;
- (id)getRollSectionData;
- (id)transparentCell;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)addMessages:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
