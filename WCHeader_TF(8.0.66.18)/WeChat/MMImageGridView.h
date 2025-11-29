@class NSMutableArray;

@interface MMImageGridView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_startRect;
@property (nonatomic) double m_stepX;
@property (nonatomic) double m_stepY;
@property (nonatomic) long long m_columnCount;
@property (retain, nonatomic) NSMutableArray *m_arrOfViews;

+ (double)getLayoutHeightForViews:(long long)a0 columms:(long long)a1 unitHeight:(double)a2;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })getLayoutSize;
- (struct CGSize { double x0; double x1; })getLayoutSizeWithRefresh;
- (struct CGSize { double x0; double x1; })getLayoutSizeEx:(BOOL)a0;
- (void).cxx_destruct;

@end
