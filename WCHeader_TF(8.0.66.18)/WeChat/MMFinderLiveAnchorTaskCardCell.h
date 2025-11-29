@class MMUILabel, MMFinderLiveNewAnchorTaskViewModel, FinderLiveQuestInstance_StageItem_TargetItem, MMUIView, UIButton;

@interface MMFinderLiveAnchorTaskCardCell : UICollectionViewCell

@property (nonatomic) float progressPercentage;
@property (retain, nonatomic) MMUILabel *taskLabel;
@property (retain, nonatomic) UIButton *opButton;
@property (retain, nonatomic) MMUILabel *opLabel;
@property (retain, nonatomic) MMUIView *progressView;
@property (retain, nonatomic) MMUIView *curProgressView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM;
@property (retain, nonatomic) FinderLiveQuestInstance_StageItem_TargetItem *targetItem;
@property (nonatomic) BOOL isMultiStage;
@property (nonatomic) BOOL isSingleItem;
@property (nonatomic) double maxTitleWidth;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (id)color;
- (void)layoutUI;
- (void)refreshStatus;
- (void)onButtonClicked;
- (void).cxx_destruct;

@end
