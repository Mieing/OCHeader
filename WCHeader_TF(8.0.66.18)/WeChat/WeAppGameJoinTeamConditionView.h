@class WeAppGameJoinTeamConditionItemView, NSString, NSDictionary, UIView, MMUIButton, MMUILabel;
@protocol WeAppGameJoinTeamConditionCheckedDelegate;

@interface WeAppGameJoinTeamConditionView : MMPageSheetBaseViewController

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topAreaView;
@property (retain, nonatomic) UIView *listCondView;
@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSDictionary *gameInfo;
@property (nonatomic) int conditionId;
@property (retain, nonatomic) NSString *conditionDesc;
@property (weak, nonatomic) WeAppGameJoinTeamConditionItemView *lastConditionItemView;
@property (weak, nonatomic) id<WeAppGameJoinTeamConditionCheckedDelegate> delegate;

- (id)initWithParmas:(id)a0;
- (void)viewDidLoad;
- (void)initUI;
- (void)layoutUI;
- (void)updateConditions:(id)a0;
- (double)contentViewHeight;
- (void)onClickLeftButton;
- (void)onClickItemAction:(id)a0;
- (id)getConditionDesc;
- (int)getConditionId;
- (void).cxx_destruct;

@end
