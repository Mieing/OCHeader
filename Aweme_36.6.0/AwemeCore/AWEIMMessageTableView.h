@class AWEIMConversationContext;
@protocol AWEIMMessageTableViewAction, AWEIMMessageTableViewDelegate;

@interface AWEIMMessageTableView : UITableView

@property (weak, nonatomic) id<AWEIMMessageTableViewAction> tableViewAction;
@property (weak, nonatomic) id<AWEIMMessageTableViewDelegate> delegate;
@property (weak, nonatomic) AWEIMConversationContext *componentContext;

+ (BOOL)enableFold;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)visibleCells;
- (void)reloadData;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollToRowAtIndexPath:(id)a0 atScrollPosition:(long long)a1 animated:(BOOL)a2;

@end
