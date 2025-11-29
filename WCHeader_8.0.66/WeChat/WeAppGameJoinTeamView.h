@class UIView, NSString, WeAppGameJoinTeamDescView, WeAppGameJoinTeamSectionView, WeAppGameJoinTeamConditionView, NSDictionary, MMFinderLiveTaskId, MMUILabel, MMUIButton, WeAppGameJoinTeamHistoryView;
@protocol WeAppGameJoinTeamViewDelegate;

@interface WeAppGameJoinTeamView : MMPageSheetBaseViewController <WeAppGameJoinTeamConditionCheckedDelegate>

@property (copy, nonatomic) id /* block */ completeCloseBlock;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *startButton;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSDictionary *gameInfo;
@property (nonatomic) int actionMode;
@property (nonatomic) BOOL canJoin;
@property (nonatomic) int sourceType;
@property (retain, nonatomic) NSString *cannotJoinReason;
@property (retain, nonatomic) MMUILabel *noticeLabel;
@property (retain, nonatomic) WeAppGameJoinTeamDescView *descView;
@property (retain, nonatomic) WeAppGameJoinTeamHistoryView *historyView;
@property (retain, nonatomic) WeAppGameJoinTeamSectionView *sectionView;
@property (retain, nonatomic) WeAppGameJoinTeamConditionView *conditionView;
@property (weak, nonatomic) id<WeAppGameJoinTeamViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 gameInfo:(id)a1 complete:(id /* block */)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initUI:(id)a0;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onClickShowHistoryButton;
- (void)onClickShowConditionButton;
- (void)onClickCloseButton;
- (void)onClickStartButton;
- (void)fetchGameSetTeamupConfigRequest;
- (void)notifyResult;
- (void)notifyReportForAction:(unsigned long long)a0;
- (id)getActionDesc:(int)a0;
- (void)onWeAppGameJoinTeamConditionBack;
- (void)onWeAppGameJoinTeamConditionChecked;
- (void).cxx_destruct;

@end
