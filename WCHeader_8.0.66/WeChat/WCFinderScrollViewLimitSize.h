@class UIScrollView;

@interface WCFinderScrollViewLimitSize : NSObject

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGSize { double width; double height; } minsize;

- (void)configScrollView:(id)a0;
- (void)_onScrollViewSetContentSize:(struct CGSize { double x0; double x1; })a0 originImp:(void /* function */ *)a1;
- (void).cxx_destruct;

@end
