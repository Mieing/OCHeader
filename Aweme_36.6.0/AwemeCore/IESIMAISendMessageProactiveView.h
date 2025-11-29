@class NSString, IESIMAIClonePanelSettingItemViewModel, UILabel, UIViewController;
@protocol IESIMContentSheetVCProtocol;

@interface IESIMAISendMessageProactiveView : UIView <IESIMSingleSelectionPanelDelegate, IESIMSheetVCDelegate>

@property (retain, nonatomic) IESIMAIClonePanelSettingItemViewModel *viewModel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) unsigned long long selectionPanelInitialValue;
@property (weak, nonatomic) UIViewController<IESIMContentSheetVCProtocol> *contentSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetWillDismiss:(id)a0;
- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (void)renderWithViewModel:(id)a0;
- (void)currentThemeDidChange;
- (id)contentSheetColor;
- (void)p_settingTapped;
- (id)p_createTopViewWithTitle:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
