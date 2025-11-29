@class UILabel, NSString, DUXCheckBox;

@interface AWEOfflineCheckBoxDialogView : UIView <DUXAlertDialogBodyView>

@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxAlertDialog_view;
- (void)clickLabel;
- (void).cxx_destruct;
- (void)setLabelText:(id)a0;
- (void)setChecked:(BOOL)a0;
- (BOOL)checked;

@end
