@class AWEIMStrangerChatListViewControllerV2;

@interface AWEIMStrangerChatCellUnreadCountComponent : AWEIMChatCellComponentBase

@property (weak, nonatomic) AWEIMStrangerChatListViewControllerV2 *hostVC;
@property (nonatomic) BOOL reportedCellShow;

- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onCellWillDisplay:(id)a0;
- (void)onCellDidClick:(id)a0;
- (id)getToRelationTagWithChatModel:(id)a0;
- (id)getRelationTagWithChatModel:(id)a0;
- (void).cxx_destruct;

@end
