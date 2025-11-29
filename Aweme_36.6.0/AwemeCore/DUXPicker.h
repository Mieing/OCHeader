@class NSString, UIPickerView;
@protocol DUXPickerDelegate, IESIMPickerDelegate;

@interface DUXPicker : UIView <IESIMPickerProtocol, UIPickerViewDelegate, UIPickerViewDataSource>

@property (weak, nonatomic) id<IESIMPickerDelegate> iesimDelegate;
@property (copy, nonatomic) id /* block */ didChangeSelectedRowForComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (nonatomic) long long componentCount;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) double maxScale;
@property (weak, nonatomic) id<DUXPickerDelegate> delegate;
@property (copy, nonatomic) id /* block */ didChangeSelectedRowForComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithEnlargeType:(unsigned long long)a0;
- (void)selectRowForComponent:(long long)a0 component:(long long)a1;
- (long long)getSelectedRowForComponent:(long long)a0;
- (void)selectRowForComponent:(long long)a0 component:(long long)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)reloadAllComponents;
- (void)reloadComponent:(long long)a0;

@end
