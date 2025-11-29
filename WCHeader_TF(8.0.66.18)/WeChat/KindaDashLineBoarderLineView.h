@class TrueDashLineBoarderView, NSString;

@interface KindaDashLineBoarderLineView : KindaLayout <MMKDashLineBoarderLineView>

@property (retain, nonatomic) TrueDashLineBoarderView *dashLineBoarderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addView:(id)a0;
- (void)addView:(id)a0 position:(int)a1;
- (void)removeView:(id)a0;
- (void)removeAllViews;
- (void)setFocusableInTouchMode:(BOOL)a0;
- (void)setDashWidth:(float)a0;
- (float)getDashWidth;
- (void)setDashColor:(id)a0;
- (id)getDashColor;
- (void)setCornerRadius:(float)a0;
- (float)getCornerRadius;
- (id)getView;
- (void).cxx_destruct;

@end
