@class AWEAwemeModel, NSString, DUXBasicSheet, NSDictionary, UIImageView, DUXCheckBox, DUXButton, UILabel;

@interface AWEFeedRelatedReadingDiversionChoiceViewController : UIViewController <DUXSheetDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXButton *cancelButton;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkBoxLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long choiceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowDiversionChoicePanel:(id)a0;
+ (void)showDiversionChoicePanel:(id)a0 completion:(id /* block */)a1 trackPrams:(id)a2;

- (void)sheetWillDismiss:(id)a0;
- (id)descText;
- (void)trackPanelShow;
- (void)checkBoxConfirm;
- (void)trackPanelClick;
- (void)selectDouyin;
- (void)selectToutiao;
- (id)headerImageUrl;
- (void).cxx_destruct;
- (id)titleText;
- (void)viewDidLoad;
- (void)setupSubviews;
- (id)confirmButtonText;

@end
