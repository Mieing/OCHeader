@class NSNumber, NSString, UIImage, UILabel, UIView, UIButton;
@protocol IESIMContactPickerSearchService, IESIMContactPickerSelectService;

@interface IESIMContactPickerConfirmComponent : AWEIMComponentBase <IESIMContactPickerSelectAction, IESIMContactPickerContentAction, IESIMContactPickerComponentViewProvider, IESIMContactPickerConfirmService>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (weak, nonatomic) id<IESIMContactPickerSearchService> searchService;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIImage *confirmIcon;
@property (retain, nonatomic) NSNumber *minimumSelectCount;
@property (nonatomic) BOOL disableDisplaySelectCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIIfNeeded;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)__setupUI;
- (void)__layoutUI;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void)contactPickerConentService:(id)a0 didLoadData:(id)a1;
- (void)contactPickerConentService:(id)a0 didChangeToEmpty:(BOOL)a1;
- (void)contactPickerContentService:(id)a0 didChangeDataSourceState:(long long)a1;
- (BOOL)p_isBigFontStyle;
- (double)p_fixedValueFor:(double)a0;
- (void)updateConfirmText:(id)a0 confirmIcon:(id)a1 minimumSelectCountForEnableConfirm:(unsigned long long)a2;
- (void)updateNeedDisplaySelectCount:(BOOL)a0;
- (void)updateButtonDisplayText;
- (void)updateEnableStyle;
- (unsigned long long)__minimumSelectCount;
- (void)__buttonTapped;
- (void)p_updateVisibleState:(BOOL)a0;
- (void).cxx_destruct;
- (id)layout;
- (id)buttonTitle;
- (id)componentView;

@end
