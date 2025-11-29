@class UIFont, NSArray, NSHashTable, UIView, NSMutableArray, RichTextView;

@interface WCFinderHeadContactInfoView : UIView

@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSArray *otherViewsArray;
@property (retain, nonatomic) UIView *lastShowView;
@property (retain, nonatomic) NSMutableArray *showViewArray;
@property (nonatomic) unsigned long long currentShowLineType;
@property (nonatomic) BOOL hasChangeFontSize;
@property (retain, nonatomic) NSHashTable *currentOtherViewsArray;
@property (retain, nonatomic) RichTextView *nameLabel;
@property (retain, nonatomic) UIFont *nameLabelCustomFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (id)nameLabelFont;
- (void)updateNickname:(id)a0 maxWidth:(double)a1 otherViews:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLastViewFrame;
- (BOOL)addViewOverMaxWidth:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLastLineRect;
- (void)checkShouldAdjustNameLabelWithView:(id)a0;
- (BOOL)layoutSubView:(id)a0 lastView:(id)a1;
- (void)reloadLayout;
- (void)relayoutShowArray;
- (long long)overrideUserInterfaceStyle;
- (id)genGradientMaskView;
- (id)getLayoutCache;
- (unsigned long long)lineType;
- (BOOL)hasReachedLineLimit;
- (id)otherDisplayViews;
- (void).cxx_destruct;

@end
