@class LynxLayoutNodeManager;

@interface LynxLayoutStyle : NSObject {
    LynxLayoutNodeManager *layoutNodeManager_;
}

@property (readonly, nonatomic) long long sign;

- (double)computedHeight;
- (long long)flexDirection;
- (double)computedWidth;
- (double)computedMarginLeft;
- (double)computedMarginRight;
- (double)computedMarginTop;
- (double)computedMarginBottom;
- (id)initWithSign:(long long)a0 layoutNodeManager:(id)a1;
- (double)computedPaddingLeft;
- (double)computedPaddingRight;
- (double)computedPaddingTop;
- (double)computedPaddingBottom;
- (double)computedMinWidth;
- (double)computedMaxWidth;
- (double)computedMinHeight;
- (double)computedMaxHeight;
- (void).cxx_destruct;

@end
