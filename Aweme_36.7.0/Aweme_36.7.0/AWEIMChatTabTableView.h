@interface AWEIMChatTabTableView : UITableView

@property (nonatomic) double lastReloadInterval;

- (void)im_setDelegate:(id)a0;
- (void)im_setDataSource:(id)a0;
- (void)reloadData;
- (void)setDataSource:(id)a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setDelegate:(id)a0;

@end
