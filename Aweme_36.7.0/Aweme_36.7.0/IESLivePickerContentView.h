@class UIImpactFeedbackGenerator, IESLivePickerSource, NSString, IESLivePickerViewConfig, NSMutableArray, UIView;

@interface IESLivePickerContentView : UIView <IESLivePickerContainerViewDateSource, IESLivePickerContainerViewDelegate>

@property (retain, nonatomic) UIView *selectionIndicatorView;
@property (retain, nonatomic) NSMutableArray *containers;
@property (retain, nonatomic) IESLivePickerViewConfig *config;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedBack;
@property (nonatomic) double selectedFactor;
@property (nonatomic) BOOL enableFeedBack;
@property (nonatomic) long long lastFeedBackRow;
@property (retain, nonatomic) IESLivePickerSource *dataSource;
@property (copy, nonatomic) id /* block */ didSelectedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setupGradientLayer;
- (id)selectedIndexs;
- (void)setupComponentView;
- (void)containerView:(id)a0 didSelectRow:(unsigned long long)a1;
- (long long)numberOfRowsInContainerView:(id)a0;
- (id)containerView:(id)a0 viewForRow:(long long)a1 reusingView:(id)a2;
- (void)containerViewDidScroll:(id)a0 roundRow:(unsigned long long)a1;
- (void)containerView:(id)a0 willDeselectRow:(unsigned long long)a1;
- (void)containerView:(id)a0 willSelectRow:(unsigned long long)a1;
- (BOOL)isIOS10OrLater;
- (void)setupSelectionIndicatorView;
- (void)selectRows:(id)a0 animate:(BOOL)a1;
- (void)caculateFeedBackInContainer:(id)a0 row:(long long)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)reloadAllComponents;
- (void)reloadComponent:(long long)a0;
- (id)viewForRow:(long long)a0 forComponent:(long long)a1;
- (long long)selectedRowInComponent:(long long)a0;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 animated:(BOOL)a2;

@end
