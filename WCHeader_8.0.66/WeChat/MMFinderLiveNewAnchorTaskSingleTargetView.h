@class MMUILabel, FinderLiveQuestInstance_StageItem_TargetItem, MMUIView, UIButton;

@interface MMFinderLiveNewAnchorTaskSingleTargetView : MMFinderLiveNewAnchorTaskTargetsView

@property (nonatomic) float progressPercentage;
@property (nonatomic) BOOL shouldShowNote;
@property (retain, nonatomic) MMUILabel *rewardTitleLabel;
@property (retain, nonatomic) MMUILabel *rewardDetailLabel;
@property (retain, nonatomic) MMUILabel *rewardNoteLabel;
@property (retain, nonatomic) MMUILabel *taskTitleLabel;
@property (retain, nonatomic) MMUILabel *taskLabel;
@property (retain, nonatomic) UIButton *opButton;
@property (retain, nonatomic) MMUILabel *opLabel;
@property (retain, nonatomic) MMUIView *progressView;
@property (retain, nonatomic) MMUIView *curProgressView;
@property (retain, nonatomic) FinderLiveQuestInstance_StageItem_TargetItem *targetItem;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)refreshStatus;
- (void)onButtonClicked;
- (void).cxx_destruct;

@end
