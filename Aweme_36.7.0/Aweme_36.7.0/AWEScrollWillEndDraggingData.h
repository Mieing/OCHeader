@class UIScrollView;

@interface AWEScrollWillEndDraggingData : NSObject

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;

- (void).cxx_destruct;

@end
