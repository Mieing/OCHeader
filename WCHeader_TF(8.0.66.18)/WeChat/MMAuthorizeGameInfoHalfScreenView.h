@class NSString, MMAuthorizeGameInfoHalfScreenViewModel, UIView, MMTableView;
@protocol MMAuthorizeGameInfoHalfScreenViewDelegate;

@interface MMAuthorizeGameInfoHalfScreenView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMAuthorizeGameInfoHalfScreenViewModel *halfScreenViewModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIView *footerViewSeperator;
@property (weak, nonatomic) id<MMAuthorizeGameInfoHalfScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setupTableView;
- (void)changeHeight;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)pageSheetContentWidth;
- (double)calDetailViewHeight;
- (void).cxx_destruct;

@end
