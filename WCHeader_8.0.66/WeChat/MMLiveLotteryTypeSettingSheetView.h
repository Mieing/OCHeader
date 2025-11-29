@class UIView, NSString, NSArray, PrizeData, MMFinderLiveTaskId, MMUILabel, MMTableView, MMUIButton;
@protocol MMLiveLotteryTypeSettingSheetViewDelegate;

@interface MMLiveLotteryTypeSettingSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property unsigned int curJoinTeamMode;
@property BOOL joinTeamDisable;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMTableView *optionTableView;
@property (retain, nonatomic) NSArray *lotteryTypeOptions;
@property (nonatomic) int selectedOptionValue;
@property (retain, nonatomic) PrizeData *prizeData;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) UIView *sepelateLine;
@property (weak, nonatomic) id<MMLiveLotteryTypeSettingSheetViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 selectedOptionValue:(int)a1 prizeData:(id)a2 joinTeamDisable:(BOOL)a3 curJoinTeamMode:(unsigned int)a4;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)canShowStartSelectLotteryType:(int)a0;
- (id)getPrizeTypeWithSelectLotteryType:(int)a0;
- (void)initDefaultData;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)liveTask;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)enableLiveLotteryTypeInfo:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)closeAction;
- (void).cxx_destruct;

@end
