@class FinderLiveQuestInstance, MMFinderLiveNewAnchorTaskViewModel, MMFinderLiveNewAnchorTaskRewardView, UIView, MMFinderLiveNewAnchorTaskTargetsView;

@interface MMFinderLiveNewAnchorTaskCardView : UICollectionViewCell

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMFinderLiveNewAnchorTaskTargetsView *targetsView;
@property (retain, nonatomic) MMFinderLiveNewAnchorTaskRewardView *rewardView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ jumpRewardHomeBlock;
@property (retain, nonatomic) FinderLiveQuestInstance *taskItem;
@property (retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end
