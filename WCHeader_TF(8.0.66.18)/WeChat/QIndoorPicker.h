@class QIndicatorLayer, NSString, UILabel, QIndoorBuilding, UITableView;
@protocol QIndoorPickerDelegate;

@interface QIndoorPicker : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *head;
@property (retain, nonatomic) QIndoorBuilding *indoorBuilding;
@property (retain, nonatomic) QIndicatorLayer *indicator;
@property (weak, nonatomic) id<QIndoorPickerDelegate> delegate;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) int indoorPickerMaxLevels;
@property (nonatomic) BOOL isDarkStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callDelegateDidSelectLevelIndex:(unsigned long long)a0;
- (void)selectLevelIndex:(unsigned long long)a0;
- (void)reloadWithIndoorBuilding:(id)a0 levelIndex:(unsigned long long)a1;
- (void)updateInicator:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 didEndDisplayingHeaderView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 didEndDisplayingFooterView:(id)a1 forSection:(long long)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupBackBorder;
- (void)setupTopUI;
- (void)setupTableView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDynamicPickerRect:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustTableViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithIndoorBuilding:(id)a0 levelIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
