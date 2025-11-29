@protocol MyUIScrollViewDelegate;

@interface MyUIScrollView : MMUIScrollView

@property (weak, nonatomic) id<MyUIScrollViewDelegate> m_delegate;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
