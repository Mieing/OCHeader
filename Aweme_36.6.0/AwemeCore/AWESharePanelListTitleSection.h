@class NSString, AWESharePanelTitleCell, NSMutableSet;
@protocol AWESharePanelListItem, AWESharePanelListCellModel;

@interface AWESharePanelListTitleSection : NSObject <AWESharePanelListSection>

@property (retain, nonatomic) id<AWESharePanelListItem> item;
@property (retain, nonatomic) id<AWESharePanelListCellModel> cellModel;
@property (retain, nonatomic) AWESharePanelTitleCell *cell;
@property (retain, nonatomic) NSMutableSet *itemSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadDataInSection;
- (id)tableView:(id)a0 cellForRow:(long long)a1;
- (id)cellModelForRow:(long long)a0;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (double)heightForRow:(long long)a0;

@end
