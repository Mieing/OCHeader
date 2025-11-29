@class UITableView, NSArray, NSString, NSMutableArray, UIButton;

@interface BDARFeedbackView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *backgroundView;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSArray *models;
@property (copy, nonatomic) id /* block */ didSelectOptionBlock;
@property (copy, nonatomic) id /* block */ didClickBackgroundBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbackToast:(BOOL)a0;
+ (void)showViewWithADModel:(id)a0 feedbackModels:(id)a1 originOffset:(struct CGPoint { double x0; double x1; })a2 reportUpdate:(BOOL)a3 dislikeUpdate:(BOOL)a4 selectOption:(id /* block */)a5 clickBackground:(id /* block */)a6;
+ (void)showWithADModel:(id)a0 originOffset:(struct CGPoint { double x0; double x1; })a1 feedbackWebEnabled:(BOOL)a2 dislikeWebEnabled:(BOOL)a3 dislikeOptimized:(BOOL)a4 selectOption:(id /* block */)a5 clickBackground:(id /* block */)a6;

- (void)clickMask;
- (void)reloadAllFeedbackData:(id)a0;
- (void)reloadFeedbackDataWithType:(unsigned long long)a0 reasons:(id)a1;
- (void)showViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)layoutSubviews;
- (void)setupUI;

@end
