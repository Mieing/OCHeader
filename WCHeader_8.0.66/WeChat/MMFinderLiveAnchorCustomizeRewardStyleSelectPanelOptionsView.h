@class NSArray, MMFinderLiveAnchorCustomizeRewardImageOptionContentView, UIView, MMFinderLiveAnchorCustomizeRewardStyleSelectLogic, MMFinderLiveAnchorCustomizeRewardTextOptionContentView;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView : UIScrollView

@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *logic;
@property (retain, nonatomic) NSArray *contentSubViewArray;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardImageOptionContentView *colorOptionView;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardTextOptionContentView *textOptionView;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardImageOptionContentView *imageOptionView;
@property (nonatomic) long long curSubviewIndex;
@property (readonly, nonatomic) double currentContainerPerferHeight;

- (id)initWithStyleSelectLogic:(id)a0;
- (void)initContentView;
- (void)initColorOptionView;
- (void)initTextOptionView;
- (void)initImageOptionView;
- (void)layoutSubviews;
- (void)refreshCurViewData;
- (void)setSubviewDisplayAtIndex:(long long)a0;
- (void)checkIsNeedSelectImageWhenCurTabIsImageView;
- (double)calcContentSubViewLeftAtIndex:(long long)a0;
- (void)refreshColorOptionViewData;
- (void)refreshTextOptionViewData;
- (void)refreshImageOptionViewData;
- (void).cxx_destruct;

@end
