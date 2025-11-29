@class NSString, AWEECOMIMQuestionItemCardModel, AWEECOMIMTextComponent, UIView, UITableView;
@protocol AWEECOMIMQuestionListViewDelegate;

@interface AWEECOMIMQuestionListView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *questionTableView;
@property (retain, nonatomic) AWEECOMIMTextComponent *textComponentView;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) AWEECOMIMQuestionItemCardModel *questionModel;
@property (weak, nonatomic) id<AWEECOMIMQuestionListViewDelegate> delegate;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)questionViewHeightWithData:(id)a0;
+ (double)questionViewTopPadding;
+ (double)questionViewBottomPadding;
+ (double)questionContentHeightWithData:(id)a0;
+ (double)singleQuestionCellHeight;
+ (id)headerTitleFont;

- (void)updateQuestionListData:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
