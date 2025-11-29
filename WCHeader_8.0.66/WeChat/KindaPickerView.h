@class NSArray, NSString, MMVoidListCallback, UIPickerView;

@interface KindaPickerView : KindaView <UIPickerViewDataSource, UIPickerViewDelegate, MMKPickerView>

@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) MMVoidListCallback *callback;
@property (retain, nonatomic) NSArray *normalData;
@property (retain, nonatomic) NSArray *syncDataFirstColumn;
@property (retain, nonatomic) NSArray *syncDataSecondColumn;
@property (nonatomic) unsigned long long seletedRowInFirstColumn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getView;
- (void)setSyncData:(id)a0 secondColumn:(id)a1;
- (void)setCallbackImpl:(id)a0;
- (void)setSelectedRows:(id)a0;
- (void)setSelectedRow:(int)a0 column:(int)a1;
- (id)getCurrentSelectedRows;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void).cxx_destruct;

@end
