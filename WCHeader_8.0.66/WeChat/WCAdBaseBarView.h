@interface WCAdBaseBarView : MMUIView

+ (double)viewHeight:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin;
+ (double)topMargin:(id)a0 maxWidth:(double)a1;

- (void)updateDataItem:(id)a0;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;

@end
