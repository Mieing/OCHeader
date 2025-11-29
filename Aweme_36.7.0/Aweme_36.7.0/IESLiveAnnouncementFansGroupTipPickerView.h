@class NSArray, NSString, IESLiveAnnouncementViewModel, UIPickerView, UIViewController;

@interface IESLiveAnnouncementFansGroupTipPickerView : IESLiveAnnouncementPageView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (copy, nonatomic) NSArray *minutes;
@property (copy, nonatomic) id /* block */ confirmSelectedGroupRemindTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)popupItemType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 viewController:(id)a2;
- (id)titleForNavBar;
- (id)rightActionsForNavBar;
- (id)leftActionsForNavBar;
- (void)setDefaultRow;
- (long long)defaultMinute;
- (void).cxx_destruct;
- (void)show;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)setupUI;
- (void)setupData;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;

@end
