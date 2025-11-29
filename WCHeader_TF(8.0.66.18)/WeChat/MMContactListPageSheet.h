@class NSArray, NSString, MMUIView, MMTableView;

@interface MMContactListPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource> {
    double m_pageSheetHeight;
}

@property (retain, nonatomic) NSArray *arrContact;
@property (retain, nonatomic) MMUIView *containerView;
@property (retain, nonatomic) MMTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithArrContact:(id)a0 pageSheetHeight:(double)a1;
- (void)initConfig;
- (void)initView;
- (void)initTableView;
- (double)getPageSheetHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
