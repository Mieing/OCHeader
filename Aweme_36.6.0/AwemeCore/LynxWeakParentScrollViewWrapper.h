@class UIScrollView;

@interface LynxWeakParentScrollViewWrapper : NSObject

@property (weak, nonatomic) UIScrollView *parentScrollView;

- (id)initWithParentScrollView:(id)a0;
- (void).cxx_destruct;

@end
