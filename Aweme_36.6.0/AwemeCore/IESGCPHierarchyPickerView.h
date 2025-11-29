@class NSArray, NSString, UILabel, UIPickerView;

@interface IESGCPHierarchyPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ finishedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmButtonDidClicked;
- (void)initUserInterface;
- (void)cancelButtonDidClicked;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
