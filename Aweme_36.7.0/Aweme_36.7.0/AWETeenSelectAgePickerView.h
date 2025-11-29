@class DUXPicker, NSString, AWETeenAgeItemModel, NSMutableArray;

@interface AWETeenSelectAgePickerView : UIView <DUXPickerDelegate>

@property (retain, nonatomic) DUXPicker *agePickerView;
@property (retain, nonatomic) NSMutableArray *ageItemArray;
@property (retain, nonatomic) AWETeenAgeItemModel *pleaseSelectItem;
@property (nonatomic) long long age;
@property (copy, nonatomic) id /* block */ didAgeChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentCountInDUXPicker:(id)a0;
- (long long)duxPicker:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)duxPicker:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)updateAgeDataItems;
- (long long)indexOfCurrentAge;
- (void)removePleaseSelectIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
