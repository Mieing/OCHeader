@class NSDateFormatter, UITextField, NSString, UILabel, AWECodeGenDouyinContentPayChargeRecommendConfigResponse, UIButton;

@interface AWEPublishAdvanceSettingChangeTimeViewController : UIViewController <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) NSDateFormatter *hourDateFormatter;
@property (retain, nonatomic) NSDateFormatter *minuteDateFormatter;
@property (retain, nonatomic) AWECodeGenDouyinContentPayChargeRecommendConfigResponse *recommendConfigModel;
@property (copy, nonatomic) id /* block */ updateItemBlock;
@property (nonatomic) double totalDuration;
@property (nonatomic) double configSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStateWithText:(id)a0;
- (void)finishButtonTapped;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)clearButtonTapped;

@end
