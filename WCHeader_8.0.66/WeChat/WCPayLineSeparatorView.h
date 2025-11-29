@class NSArray;

@interface WCPayLineSeparatorView : UIView

@property (retain) NSArray *views;
@property double interval;
@property BOOL needLine;
@property double lineX;

- (void)updateViews:(id)a0 interval:(double)a1 needLine:(BOOL)a2;
- (void)updateViews:(id)a0 interval:(double)a1 needLine:(BOOL)a2 lineX:(double)a3;
- (void)layoutSubviews;
- (void)updateView;
- (void).cxx_destruct;

@end
