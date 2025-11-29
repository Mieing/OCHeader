@class NSArray, NSString, UILabel, UITableView;

@interface AWESearchAIGCVoiceMiddlePageTryAskView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *queryData;
@property (copy, nonatomic) id /* block */ clickAskQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupSubviews;

@end
