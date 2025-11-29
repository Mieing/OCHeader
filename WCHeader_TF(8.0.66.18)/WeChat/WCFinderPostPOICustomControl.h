@class UIColor, NSMutableArray, NSString;
@protocol WCFinderPostPOICustomControlDelegate;

@interface WCFinderPostPOICustomControl : UIControl

@property (retain, nonatomic) UIColor *unselectedThemeColor;
@property (retain, nonatomic) UIColor *selectedThemeColor;
@property (nonatomic) double iconWidth;
@property (nonatomic) double defaultHeight;
@property (nonatomic) unsigned int poiStyle;
@property (retain, nonatomic) NSMutableArray *bubbleViewArray;
@property (weak, nonatomic) id<WCFinderPostPOICustomControlDelegate> delegate;
@property (copy, nonatomic) NSString *postSessionId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 unselectedThemeColor:(id)a1 selectedThemeColor:(id)a2 iconWidth:(double)a3 defaultHeight:(double)a4;
- (void)updateWithPoiStyle:(unsigned int)a0 titleContent:(id)a1 selectGuideTips:(id)a2 guidePosition:(unsigned long long)a3 recommendMaxLine:(unsigned long long)a4 recommendLocationArray:(id)a5 poiName:(id)a6;
- (id)getTitleLabel;
- (id)buildArrowImageView;
- (void)_setUpSelectedView:(id)a0 selectGuideTips:(id)a1;
- (void)_setUpDefaultViewWithSelectWithTitle:(id)a0 guideTips:(id)a1 guidePosition:(unsigned long long)a2;
- (void)_setUpRecommendBy:(unsigned long long)a0 titleContent:(id)a1 recommendLocationArray:(id)a2 selectGuideTips:(id)a3;
- (id)buildBubbleTextView:(id)a0 maxWidth:(double)a1 attachObject:(id)a2 index:(long long)a3;
- (void)bindRecommendBubbleReport;
- (void)_removeBubbleViewArray;
- (void)removeViews;
- (void).cxx_destruct;

@end
