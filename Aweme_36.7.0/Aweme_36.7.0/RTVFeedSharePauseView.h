@class UIImageView, UILabel;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface RTVFeedSharePauseView : UIView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *tipsLabel;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
