@class NSArray, NSString, NSMutableSet, UILabel, UIView, UITableView;

@interface AWEIMOnlinePrivacyDisrecommendPopupView : AWEIMBasePopupView <UITableViewDelegate, UITableViewDataSource, AWEIMOnlinePrivacyDisrecommendTableViewCellDelegate>

@property (retain, nonatomic) UIView *indicatorLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableSet *undoShareModelSet;
@property (copy, nonatomic) NSArray *disrecommendModels;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupData;
- (void)hideWithDuration:(double)a0;
- (void)showDisrecommendPopupViewWithEnterFrom:(id)a0;
- (void)p_configTableView;
- (void)getAvatartUrlListWithShareModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)clickCell:(id)a0 toUndo:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;

@end
