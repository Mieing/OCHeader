@class NSArray, NSMutableArray, NSString;

@interface ACCAdvancedRecordSettingDataManager : NSObject <ACCPopupTableViewDataManagerProtocol>

@property (retain, nonatomic) NSMutableArray *items;
@property (copy, nonatomic) NSArray *selectedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getItemAtIndex:(id)a0;
- (void)updateSelectedItemsIfNeed:(BOOL)a0;
- (id)getItemWithType:(unsigned long long)a0;
- (BOOL)isSwitchOutOfSync:(BOOL)a0 withType:(unsigned long long)a1;
- (void)syncSetting:(id)a0 needSync:(BOOL)a1;
- (long long)countOfSelectedItems;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
