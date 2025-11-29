@class UILabel, FinderLiveBoxId, UIView;

@interface MMFinderLiveCommentEntranceView : UIView

@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) FinderLiveBoxId *boxId;
@property (nonatomic) BOOL hasRedDot;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ commentEntranceDidTapCallback;
@property (copy, nonatomic) id /* block */ commentEntranceSizeDidChangeCallback;
@property (copy, nonatomic) id /* block */ commentEntranceSelectedChangeCallback;

+ (double)preferTopMargin;
+ (double)preferHeight;

- (id)initWithBoxId:(id)a0;
- (void)addGestures;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutGroupNameLabel;
- (void)layoutRedDotView;
- (void)layoutBottomLineView;
- (void)updateGroupName;
- (void)updateGroupNameLabelAlpha;
- (void)updateSelfSize;
- (void)updateHasRedDot:(BOOL)a0;
- (void)onEntranceDidTaped:(id)a0;
- (void).cxx_destruct;

@end
