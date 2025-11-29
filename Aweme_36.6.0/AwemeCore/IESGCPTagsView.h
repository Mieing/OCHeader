@class UIStackView, NSArray, UIColor, NSMutableArray;

@interface IESGCPTagsView : UIView

@property (retain, nonatomic) NSArray *tagArray;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *tagLabels;
@property (retain, nonatomic) NSMutableArray *customTagsView;
@property (nonatomic) double fontSize;
@property (nonatomic) double lineHeight;
@property (nonatomic) double padding;
@property (nonatomic) double tagPadding;
@property (retain, nonatomic) UIColor *tagBgColor;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (nonatomic) double tagCornerRadius;
@property (nonatomic) unsigned long long maxTagNum;
@property (nonatomic) BOOL hiddenTagWhenOverBounds;
@property (nonatomic) BOOL showSplitLine;
@property (retain, nonatomic) UIColor *splitViewColor;
@property (nonatomic) double splitLineHeight;
@property (nonatomic) double splitLineCornerRadius;

- (unsigned long long)tagCount;
- (void)removeAllTagView;
- (void)addCustomTagViews:(id)a0;
- (void)layoutSubviewsWithTagsArray:(id)a0;
- (id)initWithTagArray:(id)a0;
- (void)reloadTagBgColor:(id)a0 tagTextColor:(id)a1;
- (void)changeStackViewAlignment:(long long)a0;
- (BOOL)canAppendTagView;
- (id)createTagLabelWithText:(id)a0;
- (id)createSplitLineView;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (void)layoutSubviews;
- (void)setup;

@end
