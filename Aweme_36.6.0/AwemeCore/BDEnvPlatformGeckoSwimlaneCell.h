@class NSString, UITextField, UILabel, BDEnvPlatformConfigModel;

@interface BDEnvPlatformGeckoSwimlaneCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *geckoSwimlaneLabel;
@property (retain, nonatomic) NSString *geckoSwimlane;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) BDEnvPlatformConfigModel *envConfigModel;
@property (retain, nonatomic) UITextField *geckoSwimlaneTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadCellData;
- (void)updateGeckoConfigSwimlane:(id)a0;
- (id)initWithGeckoSwimlane:(id)a0;
- (void)updateEnvConfigModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)layoutView;
- (void)setupView;

@end
