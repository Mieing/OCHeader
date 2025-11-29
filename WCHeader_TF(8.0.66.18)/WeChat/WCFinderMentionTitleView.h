@class MMUIButton, WCFinderMentionTitleModel, UIImageView, WCFinderInteractionLabelGroupView, UILabel, WCFinderAggregatedTitleView, RichTextView;
@protocol WCFinderMentionTitleViewDelegate;

@interface WCFinderMentionTitleView : UIView

@property (retain, nonatomic) WCFinderAggregatedTitleView *titleView;
@property (retain, nonatomic) RichTextView *aggregatedContactTitleView;
@property (retain, nonatomic) UILabel *aggregatedCountLabel;
@property (retain, nonatomic) UILabel *timestampLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *aboveInteractionLabel;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *belowInteractionLabel;
@property (weak, nonatomic) MMUIButton *followButton;
@property (retain, nonatomic) WCFinderMentionTitleModel *model;
@property (nonatomic) double layoutWidth;
@property (nonatomic) double intrinsicHeight;
@property (weak, nonatomic) id<WCFinderMentionTitleViewDelegate> delegate;

+ (double)titleHeightWithModel:(id)a0 width:(double)a1;
+ (id)followBtnBgColor;
+ (double)titleMinWidthWithModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithModel:(id)a0;
- (void)updateInteractionLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutUIWhenAggregated;
- (void)updateHeight:(double)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)aggregatedContactDisplayContent:(id)a0;
- (void)clickUserRelationshipTag;
- (void)followButtonClicked;
- (void)clickTitleNameAction;
- (void).cxx_destruct;

@end
