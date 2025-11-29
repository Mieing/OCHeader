@class NSString, NSArray, UIView, UITableView;
@protocol PendantPreviewSelectViewDelegate;

@interface PendantPreviewSelectView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<PendantPreviewSelectViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *buttonTitles;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 buttons:(id)a1 selected:(long long)a2 delegate:(id)a3;
- (void)showInViewController:(id)a0;
- (void)dismiss;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
