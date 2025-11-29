@class WCFinderTagListViewLayout, NSArray, WCFinderTagListViewOptions, WCFinderTagListItem, NSMutableArray, UIButton;
@protocol WCFinderTagListViewDelegate;

@interface WCFinderTagListView : UIView

@property (retain, nonatomic) NSMutableArray *tagLabels;
@property (retain, nonatomic) UIButton *expandButton;
@property (nonatomic) double allTagNoWrapWidth;
@property (nonatomic) long long mmUIUserInterfaceStyle;
@property (weak, nonatomic) id<WCFinderTagListViewDelegate> delegate;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) WCFinderTagListItem *selectedItem;
@property (retain, nonatomic) WCFinderTagListViewLayout *layout;
@property (retain, nonatomic) WCFinderTagListViewOptions *options;
@property (nonatomic) BOOL autoAdjustHeight;

+ (double)displayHeightWithItems:(id)a0 options:(id)a1 width:(double)a2;
+ (double)displayHeightWithLayout:(id)a0 options:(id)a1 width:(double)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reLayout;
- (void)updateTagsLabels;
- (void)updateExpandButton;
- (void)updateExpandButtonStyle;
- (void)setupCloseBtnTextStyle;
- (void)setupCloseBtnIconStyle;
- (id)createLabel;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)updateLabel:(id)a0 selected:(BOOL)a1;
- (void)updateAccessibilityForLabel:(id)a0;
- (BOOL)isLabelSelected:(id)a0;
- (id)selectedLabel;
- (void)onTapLabel:(id)a0;
- (void)onExpandButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
