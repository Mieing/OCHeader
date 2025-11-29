@class UIScrollView;

@interface IESLiveRefreshObserverObject : NSObject

@property (readonly, weak, nonatomic) UIScrollView *scrollView;

- (void).cxx_destruct;
- (id)initWithScrollView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
