@class NSString, WCBGStorage, NSMutableDictionary, MMTableView;

@interface WCSetBackgroundViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCImageViewDelegate> {
    MMTableView *m_tableView;
    WCBGStorage *m_backgroundData;
    NSMutableDictionary *m_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onBGStorageUpdated;
- (id)idForIndexPath:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onClickWCImage:(id)a0;
- (void).cxx_destruct;

@end
