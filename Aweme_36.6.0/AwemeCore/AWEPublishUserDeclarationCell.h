@class AWEPublishUserDeclarationReminderView, UIView;

@interface AWEPublishUserDeclarationCell : AWENewPublishTableCell

@property (retain, nonatomic) AWEPublishUserDeclarationReminderView *reminder;
@property (copy, nonatomic) id /* block */ addBtnDidClickedBlock;
@property (readonly, nonatomic) UIView *reminderView;

- (void)customLayout;
- (void)addSubviewsForContentView;
- (BOOL)enableCellReminder;
- (void)showReminderView:(BOOL)a0;
- (void)configWithModel:(id)a0 optionExtra:(id)a1 selectedOption:(id)a2;
- (id)contentTitleWithOptionExtra:(id)a0 selectedOption:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
