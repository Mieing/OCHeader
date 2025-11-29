@class NSString, UITableView;

@interface AWEIMTaskDetailListSectionDefaultView : UITableViewHeaderFooterView <AWEIMRendererProtocol>

@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
