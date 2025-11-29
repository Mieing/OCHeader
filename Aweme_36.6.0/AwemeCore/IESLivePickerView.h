@class IESLivePickerContentView, IESLivePickerViewConfig, UIView, IESLivePickerSource;
@protocol IESLivePickerSheetViewDelegate;

@interface IESLivePickerView : UIView

@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *toolbar;
@property (retain, nonatomic) IESLivePickerContentView *picker;
@property (retain, nonatomic) IESLivePickerViewConfig *config;
@property (weak) id<IESLivePickerSheetViewDelegate> delegate;
@property (retain, nonatomic) IESLivePickerSource *dataSource;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (id)selectedIndexs;
- (void)setupPickerView;
- (void)selectRows:(id)a0 animate:(BOOL)a1;
- (void)backgroundOnClick:(id)a0;
- (void)cancelButtonOnClick:(id)a0;
- (void)confirmButtonOnClick:(id)a0;
- (void)setupSubViews;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showInView:(id)a0;
- (void)reloadAllComponents;
- (void)reloadComponent:(long long)a0;
- (id)viewForRow:(long long)a0 forComponent:(long long)a1;
- (long long)selectedRowInComponent:(long long)a0;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 animated:(BOOL)a2;

@end
