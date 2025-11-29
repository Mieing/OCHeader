@class NSString, UITableView;

@interface AWEIMTableViewIndexController : NSObject <AWETableViewSectionIndexDelegate, IESIMTableViewIndexControllerProtocol>

@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didSelectIndexViewBlock;
@property (copy, nonatomic) id /* block */ didUpdateIndexViewSelectedTextBlock;
@property (copy, nonatomic) id /* block */ getIndexViewFrameBlock;
@property (copy, nonatomic) id /* block */ getIndexRelationsBlock;
@property (copy, nonatomic) id /* block */ getIndexViewSectionTitlesBlock;

- (void)tableView:(id)a0 didSelectIndexViewAtSection:(unsigned long long)a1;
- (void)tableView:(id)a0 didUpdateIndexViewSelectedTextAtIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awe_indexViewGetFrame;
- (id)awe_indexViewGetIndexRelations;
- (void)p_indexViewSupportAccessibility;
- (void)setIconDataSourceOfIndexView:(id)a0;
- (void)setTextDataSourceOfIndexView:(id)a0;
- (id)initWithConfig:(id)a0 tableView:(id)a1;
- (void).cxx_destruct;

@end
