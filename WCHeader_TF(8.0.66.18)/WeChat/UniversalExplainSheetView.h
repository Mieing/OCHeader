@class UIButton, NSString;

@interface UniversalExplainSheetView : MMPageSheetBaseView <IVOIPWindowExt>

@property (retain, nonatomic) UIButton *settingButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 desc:(id)a1;
- (void)initPageSheet;
- (void)initView;
- (void)onTapSettingRing;
- (void).cxx_destruct;

@end
