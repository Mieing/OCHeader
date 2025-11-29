@class UIFont, NSArray, UIColor, UIView, NSMutableArray;
@protocol AWEPOIGradeTagSelectableViewDelegate;

@interface AWEPOIGradeTagSelectableView : AWEPOITouchThroughView

@property (copy, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSMutableArray *tagLabelArray;
@property (retain, nonatomic) UIView *unfoldLabelView;
@property (nonatomic) BOOL isOutsideSet;
@property (weak, nonatomic) id<AWEPOIGradeTagSelectableViewDelegate> delegate;
@property (retain, nonatomic) UIFont *singleTextFont;
@property (retain, nonatomic) UIColor *singleTextColor;
@property (retain, nonatomic) UIColor *singleSelectedTextColor;
@property (retain, nonatomic) UIColor *singleBackgroundColor;
@property (retain, nonatomic) UIColor *singleSelectedBackgroundColor;
@property (nonatomic) double singleBorderWidth;
@property (retain, nonatomic) UIColor *singleBorderColor;
@property (retain, nonatomic) UIColor *singleSelectedBorderColor;
@property (nonatomic) double singleTagCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } singleTextEdgeInsets;
@property (nonatomic) double singleTagHeight;
@property (nonatomic) double singleLineSpace;
@property (nonatomic) double singleTagSpace;
@property (nonatomic) long long singleLineAlignment;
@property (nonatomic) BOOL isFolded;
@property (nonatomic) unsigned long long numberOfLines;

- (void)p_tagLabelDidSelected:(id)a0;
- (id)selectedIndexs;
- (id)p_createTagLabelWithTagModel:(id)a0;
- (id)p_createUnfoldLabel;
- (void)p_adjustAlignmentWithLineTagArray:(id)a0 right:(double)a1;
- (void)p_tagLabelDidTapped:(id)a0;
- (void)p_unfoldLabelDidTapped:(id)a0;
- (void)updateWithTagArray:(id)a0;
- (void)setSelectedIndexs:(id)a0;
- (void)cancelAllSelected;
- (id)selectedTagIDs;
- (void).cxx_destruct;
- (id)init;
- (id)selectedTags;

@end
