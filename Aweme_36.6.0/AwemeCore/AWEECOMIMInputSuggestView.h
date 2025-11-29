@class NSArray, UIImageView, NSString, UILabel, UITableView;

@interface AWEECOMIMInputSuggestView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *quickReplyTableView;
@property (retain, nonatomic) UILabel *closeTitleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (copy, nonatomic) NSArray *suggestModels;
@property (copy, nonatomic) id /* block */ onClickSuggestText;
@property (copy, nonatomic) id /* block */ onClickCloseCallback;
@property (copy, nonatomic) id /* block */ onSuggestViewShow;
@property (copy, nonatomic) NSString *eventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickClose;
- (double)reloadWithSuggestModels:(id)a0 eventInfo:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
