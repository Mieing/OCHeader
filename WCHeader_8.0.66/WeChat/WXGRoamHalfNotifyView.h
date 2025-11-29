@class UILabel, UIButton, NSString;

@interface WXGRoamHalfNotifyView : MMPageSheetBaseView <IRoamBackupPackageServiceExt>

@property (copy, nonatomic) id /* block */ buttonBlock;
@property (nonatomic) unsigned long long curPackageId;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIButton *scanBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDetailHeight:(double)a0 navLeftStyle:(unsigned int)a1 iconName:(id)a2 iconColor:(id)a3 title:(id)a4 subTitle:(id)a5 buttonType:(unsigned long long)a6 buttonTitle:(id)a7 buttonBlock:(id /* block */)a8;
- (id)initWithDetailHeight:(double)a0 navLeftStyle:(unsigned int)a1 iconName:(id)a2 iconSize:(struct CGSize { double x0; double x1; })a3 iconColor:(id)a4 title:(id)a5 subTitle:(id)a6 buttonType:(unsigned long long)a7 buttonTitle:(id)a8 buttonBlock:(id /* block */)a9;
- (void)setupDotTipsView;
- (void)updateUSBTipsView;
- (void)tapButton;
- (void)onRoamBackupPackageServiceStartTask:(unsigned long long)a0;
- (void).cxx_destruct;

@end
