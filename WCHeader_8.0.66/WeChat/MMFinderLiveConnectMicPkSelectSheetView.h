@class FinderLiveMicInfo_Wording, NSString, MMTableView;

@interface MMFinderLiveConnectMicPkSelectSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkSelecting>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) FinderLiveMicInfo_Wording *micInfoWording;
@property (copy, nonatomic) id /* block */ selectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;
- (void)initiateSelection;
- (void)initViews;
- (id)subTitle:(unsigned long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
